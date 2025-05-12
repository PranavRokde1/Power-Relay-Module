#define POWER_RELAY_PIN  13  // Define the relay pin

bool Level_Select = true;  // Set to true for Active HIGH, false for Active LOW

void setup() {
  pinMode(POWER_RELAY_PIN, OUTPUT);  // Set the relay pin as output to control the relay
}

void loop() {
  if (Level_Select) {
    // Active HIGH relay mode: HIGH turns the relay ON
    digitalWrite(POWER_RELAY_PIN, HIGH);  
    delay(1000);  // Wait for 1 second
  
    digitalWrite(POWER_RELAY_PIN, LOW);  // LOW turns the relay OFF
    delay(1000);  // Wait for 1 second
  } else {
    // Active LOW relay mode: LOW turns the relay ON
    digitalWrite(POWER_RELAY_PIN, LOW);  
    delay(1000);  // Wait for 1 second
  
    digitalWrite(POWER_RELAY_PIN, HIGH);  // HIGH turns the relay OFF
    delay(1000);  // Wait for 1 second
  }
}
