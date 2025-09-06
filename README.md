# MAgro# Intelligent Agro-Environmental Control System 🌿☁️
_Automated Smart Irrigation with ESP8266 and Cloud-Based IoT Integration_

## 📅 Timeline
**Mar 2025 – Apr 2025**

## 📘 Overview
This project delivers an advanced **Intelligent Agro-Environmental Control System** using the **ESP8266 (NodeMCU)** to automate irrigation for precision agriculture. The system intelligently integrates **soil moisture telemetry**, real-time **weather data from OpenWeatherMap API**, and **cloud-based IoT orchestration via Blynk**, aiming to optimize water usage and increase crop health efficiency.

---

## 🏗️ System Architecture

### 🔌 Hardware Components
- **ESP8266 (NodeMCU)**
- **Capacitive Soil Moisture Sensor**
- **5V DC Water Pump**
- **Piezoelectric Buzzer**
- **5V Regulated Power Supply**
- **Relay Module (for pump switching)**

### 🛠️ Software Stack
- **Arduino IDE**
- **Blynk IoT Platform**
- **ESP8266WiFi** library
- **HTTPClient** for RESTful API calls
- **Analog-to-Digital Conversion (ADC)** for sensor input

---

## ⚙️ Core Functionality

- Real-time monitoring of **soil moisture levels**
- Fetches **weather data** using OpenWeatherMap API (e.g., rain forecast)
- Automated irrigation decision-making based on:
  - Soil dryness
  - Weather conditions (e.g., disables irrigation during expected rainfall)
- **Remote control and monitoring** through Blynk app/dashboard
- **Buzzer alert** for low moisture or system faults

---

## 💻 Technical Implementation

- Configured **ESP8266** for Wi-Fi, REST API, and Blynk WebSocket.
- Developed **modular C++ firmware** with:
  - Noise-filtered ADC readings
  - Threshold-based pump control logic
  - API-based weather awareness
- **Debugging via UART serial monitor**
- **Event-driven structure** for responsive performance

---

## 🧪 Challenges & Solutions

| Challenge | Resolution |
|----------|------------|
| Blynk connection/config issues | Reconfigured IoT templates and verified tokens |
| WiFiUdp/HTTPClient conflicts | Reinstalled ESP8266 board package via Boards Manager |
| Power instability | Used a regulated 5V supply and ensured proper ground coupling |

---

## ✅ Outcomes

- Successfully developed a working **prototype** of a smart irrigation system.
- Demonstrated improved **water use efficiency** and reduced manual intervention.
- Gained expertise in:
  - IoT architecture and cloud integration
  - API communication (OpenWeatherMap)
  - ESP8266 ecosystem and C++ firmware design

---

## 📸 Screenshots 
![magro](https://github.com/user-attachments/assets/b26d6f6c-ae49-4aef-a3d4-4dafbbccf050)


---

## 📂 Future Improvements
- Add support for **multiple zones** or fields
- Enable **historical data logging** to Firebase or MySQL
- Integrate **DHT11/DHT22** for temperature/humidity-based logic
- Introduce **automatic scheduling** via RTC or NTPClient
.
---


## 🙋‍♂️ Author
**SHIVAM RAJPUT** – Embedded Systems & IoT Developer  
📫 Reach out on [LinkedIn](https://linkedin.com/shivamrajputa400) or [Email](shivamrajputa400@gmail.com)
