# Smart Home Automation System

## 📌 Project Overview
This project implements a smart home automation system that controls a bulb and a fan based on motion detection and temperature sensing.  
The system automatically operates appliances only when required, helping to improve comfort and energy efficiency.  
This is a hardware-based embedded system project implemented using sensors, a microcontroller, and relay modules.

## 🎯 Objective
- To automate household appliances using sensors
- To reduce energy wastage through automatic control
- To understand sensor-based decision-making in embedded systems

## 🧩 Components Used
- Arduino UNO
- PIR Motion Sensor
- Temperature Sensor (DHT11 / LM35)
- Relay Module
- Bulb
- Fan
- Power supply
- Connecting wires

## ⚙️ Working Principle
The PIR motion sensor detects human movement and sends a signal to the microcontroller. When motion is detected, the controller activates the relay module to turn ON the bulb automatically.

The temperature sensor continuously monitors the ambient temperature. When the temperature exceeds a predefined threshold, the microcontroller switches ON the fan through the relay. The fan is turned OFF when the temperature falls below the set limit.

Relay modules provide electrical isolation between the low-voltage control circuitry and high-voltage appliances, ensuring safe operation.

## 🚀 Applications
- Smart home automation
- Automatic lighting systems
- Energy-efficient buildings
- Home appliance automation

## ✅ Conclusion
This project demonstrates a simple and effective smart home automation system using sensor-based control logic. It highlights the practical application of embedded systems in improving energy efficiency and user convenience.

