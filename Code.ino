#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include "ThingSpeak.h"

/* WiFi Details */
const char* ssid = "rog";
const char* password = "123456789";

/* ThingSpeak Details */
unsigned long channelID = 3220207;
const char* writeAPIKey = "YEYVKZ3O4CABF3IV";

/* Google Script */
const char* host = "script.google.com";
String googleScriptPath =
"https://script.google.com/macros/s/AKfycbywItwLZbKMo-sRcjNg86jkMwWR1vKso3Hc39lbPVrDK7cU8j1Exa9m8f77osYRjCXnTQ/exec";

WiFiClient client;
WiFiClientSecure secureClient;

/* Gas Sensor */
const int gasPin = A0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("=== ESP8266 Gas Monitoring System ===");

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  ThingSpeak.begin(client);

  // IMPORTANT: disable certificate check
  secureClient.setInsecure();
}

void loop() {
  int gasValue = analogRead(gasPin);

  Serial.println("-----------------------------");
  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  /* ThingSpeak */
  ThingSpeak.setField(1, gasValue);
  int ts = ThingSpeak.writeFields(channelID, writeAPIKey);

  if (ts == 200) {
    Serial.println("ThingSpeak: OK");
  } else {
    Serial.print("ThingSpeak Error: ");
    Serial.println(ts);
  }

  /* Google Sheets */
  if (secureClient.connect(host, 443)) {
    String url = googleScriptPath + "?gas=" + gasValue;

    secureClient.print(
      String("GET ") + url + " HTTP/1.1\r\n" +
      "Host: " + host + "\r\n" +
      "Connection: close\r\n\r\n"
    );

    Serial.println("Google Sheets: DATA SENT");
  } else {
    Serial.println("Google Sheets: CONNECTION FAILED");
  }

  Serial.println("-----------------------------\n");

  delay(15000);
}
