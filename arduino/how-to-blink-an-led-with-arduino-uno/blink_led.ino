const int ledPin = 13;// Pin number where the LED is connected

// Setup function runs once when you press reset or power the board
void setup() {
// Initialize the digital pin as an output
pinMode(ledPin, OUTPUT);
}

// Loop function runs over and over again forever
void loop() {
digitalWrite(ledPin, HIGH); // Turn the LED on
delay(1000); // Wait for a second
digitalWrite(ledPin, LOW); // Turn the LED off
delay(1000); // Wait for a second
}