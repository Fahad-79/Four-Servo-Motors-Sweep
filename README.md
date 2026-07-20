# Four Servo Motors Sweep Project

## Project Description

This project uses an Arduino Uno to control four servo motors.

The servo motors perform two actions:

1. All four servo motors move using the Sweep motion for 2 seconds.
2. After 2 seconds, all servo motors stop and hold at 90 degrees.

## Components

- Arduino Uno
- Breadboard
- 4 Servo Motors
- Jumper Wires
- Tinkercad Circuits

## Connections

| Servo Motor | Signal Pin | Power | Ground |
|-------------|------------|-------|--------|
| Servo 1 | Pin 3 | 5V | GND |
| Servo 2 | Pin 5 | 5V | GND |
| Servo 3 | Pin 6 | 5V | GND |
| Servo 4 | Pin 9 | 5V | GND |

## How It Works

The program uses the Arduino Servo library to control four servo motors.

At the start of the simulation, all servo motors move together from 0 degrees to 180 degrees and then return from 180 degrees to 0 degrees.

This Sweep movement continues for 2 seconds.

After 2 seconds, all four servo motors move to 90 degrees and remain fixed at that position.

## Arduino Code

The code uses the following servo pins:

- Servo 1: Pin 3
- Servo 2: Pin 5
- Servo 3: Pin 6
- Servo 4: Pin 9

The Sweep duration is set to 2000 milliseconds.

## Project Files

- Arduino code file
- Circuit image
- Simulation video
- README file

## Author

Fahad Al-Mutairi
