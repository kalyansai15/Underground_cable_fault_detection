# Underground Cable Fault Detection System

An intelligent system designed to detect faults in underground cables by monitoring the current flow. This system uses Arduino-based hardware components, including a current sensor, buzzer, and buttons, to detect anomalies in cable currents, alerting users to faults.

---

## Features

- **Fault Detection**: Detects faults in underground cables by monitoring changes in the current flow.
- **Real-Time Alerts**: Sends immediate alerts through a buzzer when a fault is detected.
- **Simple Hardware Setup**: Uses affordable components such as Arduino Uno, current sensors, and a buzzer.
- **User Control**: The system includes a button to reset or acknowledge the detected faults.
- **Low Power Consumption**: Operates with minimal power usage, ideal for long-term deployment.

---

## Installation

### Prerequisites

Before setting up the Underground Cable Fault Detection system, ensure you have the following:

- **Arduino Uno** board
- **Current Sensor (e.g., ACS712)**
- **Buzzer**
- **Push Button**
- **Arduino IDE** for programming the Arduino board

### Steps to Install

1. **Download Arduino IDE**:  
   Install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

2. **Hardware Setup**:
   - Connect the **current sensor** to the Arduino Uno to monitor the current flowing through the cables.
   - Connect a **buzzer** to the Arduino Uno to generate sound alerts when a fault is detected.
   - Set up a **push button** to allow the user to reset or acknowledge the detected fault.

3. **Upload the Code**:
   - Open the **Arduino IDE** and upload the provided code (see `fault_detection.ino`) to your Arduino Uno.

4. **Start Detection**:
   - Once the system is powered on, it will start monitoring the current flow through the cables. If the current falls outside the expected range, the system will trigger the buzzer as an alert.

---

## Components Used

- **Arduino Uno**: The microcontroller used for the fault detection system.
- **Current Sensor (ACS712)**: Monitors the current flow through the underground cables to detect faults.
- **Buzzer**: Provides an audible alert when a fault is detected.
- **Push Button**: Used to reset or acknowledge the fault detection.
- **Jumper Wires**: For making connections between the components.

---

# BLOCK DIAGRAM

![image](https://github.com/user-attachments/assets/2ed53253-89ea-4fb2-ad47-1c161dcc64fa)

---

# IMPLEMENTATION PROTOTYPE IMAGES

![image](https://github.com/user-attachments/assets/b39d7d73-db8f-4cb7-ac16-d3798272a64b)

---

# Folder Structure

```plaintext
Underground_cable_fault_detection/
│
├── src/                       # Arduino code and scripts
│   └── fault_detection.ino    # Arduino code for fault detection
│
├── requirements.txt           # Required software libraries (if any)
├── README.md                  # This file
└── LICENSE                    # License file for the project (e.g., MIT)
```

---

# How It Works
1. **Current Flow Monitoring:**
    The system uses a current sensor (ACS712 or similar) to continuously monitor the current flowing through the underground cables. The sensor outputs an analog signal that is read by the Arduino Uno.

2. **Fault Detection:**
    If the current drops below a predefined threshold, indicating a possible fault in the cable (such as a short circuit or breakage), the Arduino triggers the buzzer as an alert.

3. **User Interaction:**
    The user can press the push button to reset the system and silence the buzzer after a fault is acknowledged.

4. **Alert System:**
    The buzzer provides an audible alert to notify users about the detected fault. This helps to quickly identify and address issues in underground cable systems.

---

# Contributing
We welcome contributions! If you'd like to improve the system or add new features, feel free to fork the repository, make changes, and submit a pull request. Please ensure your contributions follow the project's coding conventions and are well-documented.

# License
This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgments
- **Arduino: For providing the hardware platform that powers this project.
- **ACS712 Current Sensor: For enabling precise current measurement in the system.
- **Open-source community: For contributing to the development of affordable, accessible technologies.
