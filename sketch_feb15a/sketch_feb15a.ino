#define BUZZER_PIN 9  // Connect to PWM pin

void setup() {
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600); 
}

void loop() {
    tone(BUZZER_PIN, 440);  // Play a 1kHz tone
    Serial.print("hello");
    delay(500);              // Wait 500ms
    noTone(BUZZER_PIN);      // Stop the tone
    delay(500);              // Wait 500ms
}
