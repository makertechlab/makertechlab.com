# LED Blinking Project with Arduino Uno

Welcome to **Maker Tech Lab**! This repository contains the source code and step-by-step guide for a simple yet essential beginner project: **Blinking an LED with an Arduino Uno**. This project is a great introduction to the world of electronics and programming with Arduino.

For the full tutorial, visit the project page: [How to Blink an LED with Arduino Uno](https://www.makertechlab.com/how-to-blink-an-led-with-arduino-uno/).

## Materials Needed
To follow along with this project, you'll need the following components:

| Material          | Link to Purchase  |
| ----------------- | ----------------- |
| [Arduino Uno](https://www.amazon.com/dp/B008GRTSV6) | |
| [LED](https://www.amazon.com/dp/B01GE4WHK6) | |
| [220 Ohm Resistor](https://www.amazon.com/dp/B0CXPR6GVX) | |
| [Breadboard](https://www.amazon.com/dp/B0040Z4QN8) | |
| [Jumper Wires](https://www.amazon.com/dp/B01EV70C78) | |

## Circuit Diagram
Before we dive into the code, let's set up the circuit. Use the following diagram to connect the components correctly:

![Circuit Diagram](https://www.makertechlab.com/wp-content/uploads/2024/07/blinkschematic.png)
![Mounted Components](https://www.makertechlab.com/wp-content/uploads/2024/07/blinkmount-300x267.png)
![Breadboard View](https://www.makertechlab.com/wp-content/uploads/2024/07/blinkprotoboard.png)

### Steps to Build the Circuit:
1. **Connect the LED**: Place the LED on the breadboard. Connect the longer leg (anode) to a digital pin (e.g., pin 13) on the Arduino through a 220-ohm resistor.
2. **Connect the Resistor**: Connect the other leg of the resistor to the Arduino's ground (GND).
3. **Complete the Circuit**: Connect the shorter leg (cathode) of the LED to the ground rail on the breadboard.

## The Code
Below is the Arduino code that makes the LED blink:

```cpp
const int ledPin = 13; // Pin number where the LED is connected

// Setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the digital pin as an output
}

// Loop function runs repeatedly forever
void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000);                // Wait for a second
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(1000);                // Wait for a second
}
