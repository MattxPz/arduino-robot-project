void detener() {
  Serial.println("Motores detenidos");
}

void avanzar() {
  Serial.println("Izquierda adelante | Derecha adelante");
}

void retroceder() {
  Serial.println("Izquierda atras | Derecha atras");
}

void girarIzquierda() {
  Serial.println("Izquierda atras | Derecha adelante");
}

void girarDerecha() {
  Serial.println("Izquierda adelante | Derecha atras");
}

void ejecutarOrden(char orden) {
  switch (orden) {
    case 'F':
      avanzar();
      break;

    case 'B':
      retroceder();
      break;

    case 'L':
      girarIzquierda();
      break;

    case 'R':
      girarDerecha();
      break;

    case 'S':
      detener();
      break;

    default:
      Serial.println("Orden invalida");
      detener();
      break;
  }
}

void setup() {
  Serial.begin(9600);
  detener();
  Serial.println("Ordenes: F, B, L, R, S");
}

void loop() {
  if (Serial.available() > 0) {
    char orden = Serial.read();

    if (orden != '\n' && orden != '\r') {
      ejecutarOrden(orden);
    }
  }
}