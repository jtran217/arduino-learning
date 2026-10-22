const int UNIT_MS = 200;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void blink(int units) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(units * UNIT_MS);
  digitalWrite(LED_BUILTIN, LOW);
}

void repeat(int units, int times) {
  for (int i = 0; i<times; i++) {
    if (i>0) delay(UNIT_MS);
    blink(units);
  }
}

void loop() {
  repeat(1,3);
  delay(3*UNIT_MS);
  repeat(3,3);
  delay(3*UNIT_MS);
  repeat(1,3);
  delay(7 * UNIT_MS);
}
