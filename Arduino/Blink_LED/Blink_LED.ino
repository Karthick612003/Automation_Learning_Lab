// Define the pin for the built-in LED
#define LED_PIN 2

void setup() {
  // Set the pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn the LED ON
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, LOW);  // Turn the LED OFF
  delay(1000);                 // Wait for 1 second
}