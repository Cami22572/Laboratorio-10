#include <Arduino.h>

// Configuración del ESP32
const int potPin = 34;  // Pin ADC para el potenciómetro
int potValue = 0;

void setup() {
  Serial.begin(115200); // Inicializamos UART para comunicación con STM32
  pinMode(potPin, INPUT);  // Pin del potenciómetro como entrada
}

void loop() {
  potValue = analogRead(potPin);  // Leer el valor del ADC (potenciómetro)
  Serial.println(potValue);  // Enviar el valor por UART
  delay(1000);  // Esperar 1 segundo entre lecturas
}
