const int PIN_LED = LED_BUILTIN;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);

  Serial.begin(9600);
  Serial.println("Envia E para encender o A para apagar");
}

void loop() {
  if (Serial.available() > 0) {
    char orden = Serial.read();

    if (orden == 'E') {
      digitalWrite(PIN_LED, HIGH);
      Serial.println("LED encendido");
    } else if (orden == 'A') {
      digitalWrite(PIN_LED, LOW);
      Serial.println("LED apagado");
    } else if (orden != '\n' && orden != '\r') {
      Serial.println("Orden desconocida");
    }
  }
}