# IoT-Smart-Clothesline-System

IoT Smart Clothesline System

This system will automatically retract clothes when rain is detected using an Arduino Nano, rain sensor, and servo motor.

![WhatsApp Image 2025-07-02 at 11 28 43 PM (1)](https://github.com/user-attachments/assets/ea1d9db9-5467-4924-8799-2004723b1c9b)


✅ Project Overview

| Feature              | Description                                            |
| -------------------- | ------------------------------------------------------ |
| 🧠 Microcontroller   | Arduino Nano                                           |
| 🌧️ Rain Detection   | Rain Sensor Module (Yl-83 or FC-37)                    |
| 🔄 Retraction System | Servo Motor (e.g., SG90) controlling a clothes rod     |
| 🧰 Structure         | Cardboard house mock-up with windows, roof, and hanger |
| ⚡ Power Supply       | USB or 5V source (Power bank or wall adapter)          |


✅ Components List (BOM)

| Component          | Quantity | Description / Link                             |
| ------------------ | -------- | ---------------------------------------------- |
| Arduino Nano       | 1        | Microcontroller board                          |
| Rain Sensor Module | 1        | YL-83 or FC-37 (rain detector with analog out) |
| Servo Motor (SG90) | 1        | 180° standard hobby servo                      |
| Jumper Wires       | \~10     | Male-to-male                                   |
| Breadboard         | 1        | Mini breadboard for prototyping                |
| Cardboard Model    | 1        | House mock-up as shown in your photo           |
| USB Cable          | 1        | For power and programming                      |


✅ How It Works

Rain sensor detects water presence.
Analog values > threshold → rain detected.
Arduino moves the servo from 0° (extended) to 90° (retracted).
Automatically returns to extended when rain stops.

✅ Optional Upgrades

| Upgrade            | Component                       | Benefit                              |
| ------------------ | ------------------------------- | ------------------------------------ |
| ☁️ IoT Alerts      | ESP8266 (or via Nano + ESP-01)  | Receive SMS/Email when it rains      |
| ☀️ Solar Power     | 6V Solar Panel + TP4056 + 18650 | Self-powered clothesline             |
| 🌡️ Temp Sensor    | DHT11/DHT22                     | Add temperature + humidity awareness |
| 📱 App Integration | Blynk / Node-RED                | Remote status via phone/web UI       |
