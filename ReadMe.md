# 🛑 IoT-Based Hazardous Gas Monitoring System Using ESP8266

---

## 📌 Project Overview

This project is an **IoT-Based Hazardous Gas Monitoring System** developed using the **ESP8266 (NodeMCU)**.  
The system continuously monitors hazardous gases and displays real-time data on:

- Serial Monitor  
- Google Sheets  
- Cloud Platform (ThingSpeak)

This solution helps in **preventing accidents caused by gas leakage** and is suitable for  
**industries, homes, laboratories, and gas plants**.

---

## 🎯 Objectives

- Detect hazardous gases in real time  
- Display sensor readings on the Serial Monitor  
- Send gas concentration data to Google Sheets automatically  
- Upload live sensor data to the cloud  
- Build a low-cost and reliable IoT-based safety system  

---

## 🧠 System Working

1. The gas sensor continuously senses the surrounding air  
2. ESP8266 reads analog gas values from the sensor  
3. The data is processed and:
   - Displayed on the Serial Monitor  
   - Sent to Google Sheets using HTTP requests  
   - Uploaded to the ThingSpeak cloud platform  
4. Gas levels can be monitored remotely via the internet  

---

## 🧰 Hardware Components

- ESP8266 (NodeMCU)  
- MQ Series Gas Sensor (MQ-2 / MQ-5 / MQ-135)  
- Breadboard  
- Jumper Wires  
- USB Cable / Power Supply  

---

## 💻 Software & Tools

- Arduino IDE  
- ESP8266 Board Package  
- Google Apps Script  
- ThingSpeak Cloud  
- Git & GitHub  

---

## 🔌 System Architecture

Gas Sensor
│
▼
ESP8266 (NodeMCU)
├─ Serial Monitor
├─ Google Sheets (HTTPS)
└─ ThingSpeak Cloud

yaml
Copy code

---

## 📊 Output

- Real-time gas values on Serial Monitor  
- Time-stamped data logging in Google Sheets  
- Cloud-based visualization using ThingSpeak  

---

## 🌐 Applications

- Industrial Gas Safety Systems  
- LPG Leakage Detection  
- Smart Home Safety  
- Laboratories  
- Environmental Monitoring  

---

## 🚀 Future Enhancements

- Buzzer & LED alert system  
- SMS / Email notifications  
- Mobile application dashboard  
- Multiple gas sensor integration  
- AI-based gas anomaly detection  

---

## 📁 Project Structure

ESP8266-Based-Gas-Leakage-Monitoring/
│
├── code/
│ └── gas_monitoring_esp8266.ino
│
├── diagrams/
│ └── block_diagram.png
│
├── README.md
└── LICENSE

yaml
Copy code

---

## ⚙️ How to Run

1. Clone the repository  
2. Open the code in Arduino IDE  
3. Select **NodeMCU 1.0 (ESP-12E Module)**  
4. Update WiFi credentials  
5. Upload the code  
6. Open Serial Monitor (115200 baud rate)  

---

## 👨‍💻 Author

**Aditya Rahangdale**  
Embedded Systems & IoT Developer  

---

## 📜 License

This project is licensed under the **MIT License**.

---

⭐ Star this repository if you find it useful!
