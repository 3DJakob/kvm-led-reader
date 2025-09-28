#define LDR_PIN 2     // LDR connected to GP2
#define LED_PIN 5     // LED connected to GPIO5 with resistor

void setup() {
  // Serial.begin(115200);
  // delay(1000);
  // Serial.println("ESP32-C6 LDR Monitor with Blue LED");

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);  // Start with LED OFF
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  // Serial.print("LDR Value: ");
  // Serial.println(ldrValue);

  if (ldrValue > 3700) {
    digitalWrite(LED_PIN, HIGH);  // Turn LED ON
  } else {
    digitalWrite(LED_PIN, LOW);   // Turn LED OFF
  }

  delay(50);
}
