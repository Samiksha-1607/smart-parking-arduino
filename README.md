# Smart Parking System using Arduino

## Project Description

The Smart Parking System is a simple embedded system project that detects the availability of parking slots using IR sensors.

The system uses:
- IR Sensor 1 for Parking Slot 1
- IR Sensor 2 for Parking Slot 2
- IR Sensor 3 for Parking Slot 3

The sensors are connected to an Arduino, which detects whether each parking slot is occupied or available and displays the status through the Serial Monitor.

## Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| IR Sensor | 3 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

## Pin Configuration

| IR Sensor | Arduino Pin | Function |
|---|---:|---|
| Slot 1 Sensor | 2 | Detect Slot 1 |
| Slot 2 Sensor | 3 | Detect Slot 2 |
| Slot 3 Sensor | 4 | Detect Slot 3 |

## Working

The parking system continuously monitors the three parking slots using IR sensors.

The system operates as follows:

1. IR sensors detect the presence of a vehicle.
2. Arduino reads the sensor values.
3. If the sensor output is LOW, the slot is considered occupied.
4. If the sensor output is HIGH, the slot is considered available.
5. The status of each parking slot is displayed on the Serial Monitor.
6. The system continuously updates the parking status.

## Software

- Arduino IDE
- Embedded C/C++
- Arduino Uno
- GitHub

## Project Objective

The objective of this project is to demonstrate sensor-based parking slot detection using Arduino and IR sensors. The project also demonstrates code documentation, QA issue tracking, and collaborative problem solving using GitHub.

## QA and Issue Tracking

GitHub Issues are used to identify, document, discuss, and resolve software and hardware-related problems in the project.

QA issues will be tracked with:
- Problem description
- Severity
- Root cause
- Proposed solution
- Testing
- Resolution

## Project Status

Initial Smart Parking System implementation completed.

QA testing and issue tracking are in progress.
