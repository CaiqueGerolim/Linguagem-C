
/*
Mayck Arca
2:10 PM (1 hour ago)
to me 
*/

#include <Arduino.h>
#include <Servo.h>

const int buttonPin = 15;    // Pino do Botão
const int servoPin = 4;     // Pino do Motor
const unsigned long delayTime = 1000;  // Intervalo 

Servo servoMotor;  // Objeto

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Entrada
  servoMotor.attach(servoPin);       // Liga o Servo 
  servoMotor.write(servoPin, 0);               // 0 Graus
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // Verifica o Botão
    servoMotor.write(servoPin, 180);              // Gira o servo motor para 180 graus
    delay(delayTime);                   // Espera 8 segundos
    servoMotor.write(servoPin, 0);                // Retorna o servo motor para 0 graus
    delay(1000);                        // Espera 1 segundo Para Evitar Problema
  }
}
