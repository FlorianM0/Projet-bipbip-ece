int bouton = 2;

void setup() {
  pinMode(bouton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(bouton) == LOW) {
    Serial.println("Bouton appuyé !");
    delay(300);
  }
}
