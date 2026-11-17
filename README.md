# 🚗 Proyectos Arduino: Desarrollo, Estudio y Práctica

Repositorio de **proyectos, ejercicios y pruebas con Arduino** creado para el desarrollo, el estudio y la práctica de electrónica y programación embebida. El hilo conductor de todo el repositorio es un proyecto principal: **un carro controlado desde el celular con Arduino**.

---

## 📖 Descripción

Este repositorio reúne el recorrido de aprendizaje necesario para construir un carro robot controlado de forma inalámbrica desde un teléfono móvil. Se parte de ejercicios básicos (LEDs, botones, sensores, motores) y se avanza paso a paso hasta integrar todo en el proyecto final.

Cada carpeta contiene código comentado, diagramas de conexión y notas, de modo que sirva tanto como **bitácora personal de estudio** como **material de consulta** para otras personas que estén aprendiendo.

---

## 🎯 Objetivos

- Aprender y practicar los fundamentos de Arduino (entradas, salidas digitales y analógicas, PWM, comunicación serial).
- Comprender el funcionamiento de motores DC y su control mediante un driver (puente H).
- Implementar comunicación inalámbrica entre el celular y el Arduino (Bluetooth).
- Desarrollar un carro funcional que pueda moverse en todas las direcciones desde una aplicación móvil.
- Documentar el proceso de forma clara para facilitar su replicación.

---

## 🏁 Proyecto principal: Carro controlado desde el celular

Carro robot de tracción con motores DC, controlado mediante una app en el celular.

### Funcionalidades

- ⬆️ Avanzar
- ⬇️ Retroceder
- ⬅️ Girar a la izquierda
- ➡️ Girar a la derecha
- ⏹️ Detener

---

<!-- ## 🧰 Componentes y materiales

| Componente | Cantidad | Descripción |
|---|---|---|
| Arduino UNO (o compatible) | 1 | Microcontrolador principal |
| Módulo Bluetooth HC-05 / HC-06 | 1 | Comunicación inalámbrica con el celular |
| Driver de motores L298N (o L293D) | 1 | Control de dirección y velocidad de los motores |
| Motores DC con reductor | 2 a 4 | Tracción del carro |
| Chasis para carro robot | 1 | Estructura con ruedas |
| Batería / portapilas (7.4 V o 4×AA) | 1 | Alimentación de motores y Arduino |
| Protoboard y cables jumper | — | Conexiones |
| Sensor ultrasónico HC-SR04 | 1 | *(Opcional)* Detección de obstáculos |
| LEDs y resistencias | — | *(Opcional)* Luces |

--- -->

<!-- ## 🔌 Conexiones (esquema base)

> Los pines pueden variar según tu montaje. Ajusta el código si usas otros.

**Módulo Bluetooth HC-05**

| HC-05 | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| TX | Pin 10 (RX software) |
| RX | Pin 11 (TX software) *(usar divisor de voltaje)* |

**Driver L298N**

| L298N | Arduino |
|---|---|
| IN1 | Pin 5 |
| IN2 | Pin 6 |
| IN3 | Pin 9 |
| IN4 | Pin 3 |
| ENA / ENB | Pines PWM o puente (velocidad máxima) |
| GND | GND común con Arduino |

--- -->

<!-- 
## 📱 Aplicación móvil

El carro puede controlarse con cualquier app de control Bluetooth serial, por ejemplo:

- **Arduino Bluetooth Controller**
- **Serial Bluetooth Terminal**
- **MIT App Inventor** (para crear tu propia app personalizada) -->

### Comandos utilizados en monitor Serial

| Comando | Acción |
|---|---|
| `F` | Avanzar |
| `B` | Retroceder |
| `L` | Izquierda |
| `R` | Derecha |
| `S` | Detener |

---

## 📂 Estructura del repositorio

```
├── arduino-project/        ← Proyecto principal
│   └── vehicle-project.ino
├── clases/
│   └── clase01/
├── docs/
|   └── TECH-INFO.md
├── README.md
└── test-file.ino
```

---

## 🧠 Conceptos que se practican

- Electrónica básica y lectura de esquemas
- Programación en C/C++ para Arduino
- Señales PWM
- Comunicación serial (UART) y SoftwareSerial
- Puente H y control de motores DC
- Integración de hardware y software

---

## ⚠️ Recomendaciones y solución de problemas

- Conecta siempre los **GND en común** entre Arduino, driver y batería.
- **Desconecta el módulo Bluetooth (TX/RX)** al subir el código si usas los pines 0 y 1.
- Si los motores no giran, revisa la alimentación: el USB no entrega suficiente corriente.
- Si el carro gira al revés, intercambia los cables del motor correspondiente.
<!-- - El módulo HC-05 trabaja con lógica de 3.3 V en su pin RX: usa un divisor de voltaje. -->

---

## 📄 Licencia

Este proyecto se distribuye bajo la licencia **MIT**. Puedes usarlo, modificarlo y compartirlo libremente, manteniendo el reconocimiento al autor.

---

⭐ Si este repositorio te fue útil, ¡no olvides darle una estrella!