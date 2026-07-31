# Voltage-Detection-Sensor-Arduino
Arduino-based voltage detection system with real-time LCD display and Serial Monitor output

# Voltage Detection Sensor Using Arduino and I2C LCD

A simple Arduino-based project for detecting voltage and displaying the reading on a 16x2 I2C LCD in real time. The same value is also printed on the Serial Monitor for testing and verification.

## Overview

This project demonstrates how an Arduino can read an analog signal, convert it into a voltage value, and display the result on an LCD screen. It is a useful beginner-friendly embedded systems project for understanding analog input, LCD interfacing, and serial communication.

## Features

* Real-time voltage measurement
* LCD output using I2C communication
* Serial Monitor output for debugging
* Clean and lightweight Arduino code
* Easy simulation using Tinkercad

## Components Used

* Arduino Uno
* Voltage Detection Sensor
* 16x2 I2C LCD Display
* Jumper wires
* Tinkercad simulation

## Working Principle

The voltage sensor provides an analog input to the Arduino. The Arduino reads the signal through its analog pin, calculates the voltage value, and displays the result on the LCD. The same reading is also sent to the Serial Monitor for monitoring during simulation.

## Circuit Connections

### I2C LCD

* VCC → 5V
* GND → GND
* SDA → A4
* SCL → A5

### Voltage Sensor

* VCC → 5V
* GND → GND
* Signal Output → A0

## File Structure

```text
Voltage-Detection-Sensor/
├── voltage_sensor_lcd.ino
├── README.md
└── Images/
    ├── pin_connection_diagram.png
    ├── circuit_wiring.png
    ├── serial_monitor_output.png
    └── lcd_voltage_display.png
```

## Output

When the circuit runs successfully, the LCD displays the measured voltage in real time.

Example:

```text
Voltage:
12.45 V
```

## Skills Demonstrated

* Arduino programming
* Analog signal reading
* LCD interfacing
* Serial communication
* Hardware simulation using Tinkercad

## Conclusion

This project provides a clear introduction to voltage detection using Arduino. It combines hardware interfacing with live display output, making it a practical and educational embedded systems project.
