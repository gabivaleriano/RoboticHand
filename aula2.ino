// Inclusão da biblioteca Servo
#include <Servo.h>

//dá o nome "motor" para o servo-motor
Servo motor;  

//nesta parte do programa damos as denições
void setup() { 

  //diz que o motor está ligado ao pino 9
  motor.attach(9);  

}

//nesta parte do programa temos os comandos que se repetem
void loop() { 

  //comando para mandar o servo para a posição 180
  motor.write(180); 

  //espera 500 ms
  delay(500); 

  //comando para mandar o servo para a posição 0
  motor.write(0);

  //espera 500 ms
  delay(500); 

  //comando para mandar o servo para a posição 90
  motor.write(90);

  //espera 500 ms
  delay(500); 
}
