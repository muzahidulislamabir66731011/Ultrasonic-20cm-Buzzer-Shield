#define TRIG_PIN 5      // Ultrasonic TRIG pin
#define ECHO_PIN 18     // Ultrasonic ECHO pin
#define BUZZER_PIN 23   // Buzzer + pin

void setup() {
  Serial.begin(115200);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // --- Send trigger pulse to ultrasonic sensor ---
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // --- Measure echo pulse ---
  long duration = pulseIn(ECHO_PIN, HIGH);
  int distance = duration * 0.034 / 2;  // Convert to cm

  // --- Print distance to Serial Monitor ---
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // --- Buzzer control ---
  if (distance > 0 && distance < 20) {
    digitalWrite(BUZZER_PIN, HIGH);  // Beep if object < 20 cm
  } else {
    digitalWrite(BUZZER_PIN, LOW);   // Silent otherwise
  }

  delay(200);  // small delay to keep readings stable
}
