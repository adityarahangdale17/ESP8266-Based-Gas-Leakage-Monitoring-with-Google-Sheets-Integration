# IoT-Based Hazardous Gas Monitoring System Using ESP8266

## 📌 Project Overview
This project is an **IoT-based Hazardous Gas Monitoring System** developed using the **ESP8266 (NodeMCU)**.  
The system continuously monitors hazardous gases and displays real-time data on:

- Serial Monitor
- Google Sheets
- Cloud Platform

This solution helps in **preventing accidents caused by gas leakage** and is suitable for **industries, homes, laboratories, and gas plants**.

---

## 🎯 Objectives
- Detect hazardous gases in real time
- Display sensor readings on the Serial Monitor
- Send gas concentration data to Google Sheets automatically
- Upload live sensor data to the cloud
- Build a low-cost and reliable IoT-based safety system

---

## 🧠 System Working
1. The gas sensor continuously senses the surrounding air.
2. The ESP8266 reads analog gas values from the sensor.
3. The data is processed and:
   - Displayed on the Serial Monitor
   - Sent to Google Sheets using HTTP requests
   - Uploaded to a cloud platform for remote access
4. Users can monitor gas levels from anywhere via the internet.

---

## 🧰 Hardware Components
- ESP8266 (NodeMCU)
- Gas Sensor (MQ-2 / MQ-5 / MQ-135)
- Breadboard
- Jumper Wires
- USB Cable / Power Adapter

---

## 💻 Software & Tools
- Arduino IDE
- ESP8266 Board Package
- Google Sheets (using Google Apps Script)
- Cloud Platform (ThingSpeak / Firebase / IoT Cloud)
- Git & GitHub

---

## 🔌 Block Diagram

+-------------+ +-------------+ +----------------+
| Gas Sensor | ----> | ESP8266 | ----> | Serial Monitor |
+-------------+ | (NodeMCU) | +----------------+
| |
| | ----> Google Sheets
| |
| | ----> Cloud Platform
+-------------+

yaml
Copy code

---

## 📊 Output
- Real-time gas values displayed on the Serial Monitor
- Automatic logging of gas data in Google Sheets
- Live cloud dashboard for remote monitoring

---

## 🌐 Applications
- Industrial Safety Systems
- LPG Gas Leakage Detection
- Smart Homes
- Laboratories
- Environmental Monitoring

---

## 🚀 Future Enhancements
- Buzzer and LED alert system
- SMS / Email notifications
- Mobile App Integration
- Multiple gas sensor support
- AI-based gas level prediction

---

## 📂 Project Structure
IoT-Hazardous-Gas-Monitoring-System/
│
├── Code/
│ └── gas_monitoring_esp8266.ino
│
├── Circuit_Diagram/
│ └── circuit_diagram.png
│
├── README.md
└── LICENSE

yaml
Copy code

---

## ⚙️ How to Run the Project
1. Install Arduino IDE
2. Add ESP8266 board package
3. Connect the gas sensor to ESP8266
4. Update WiFi credentials in the code
5. Upload the code to ESP8266
6. Open Serial Monitor to view data
7. Check Google Sheets and Cloud dashboard

---

## 👨‍💻 Author
**Aditya Rahangdale**  
Electronics / Embedded Systems Student 