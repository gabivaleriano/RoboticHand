// Inclusão da biblioteca Servo
#include <Servo.h>

//dá o nome "motor" para o servo-motor
Servo motor1;  
Servo motor2; 
Servo motor3; 
Servo motor4; 
Servo motor5; 

//nesta parte do programa damos as denições
void setup() { 

  //diz que o motor está ligado ao pino 9
  motor1.attach(8);  
    //diz que o motor está ligado ao pino 9
  motor2.attach(9);  
    //diz que o motor está ligado ao pino 9
  motor3.attach(10);  
    //diz que o motor está ligado ao pino 9
  motor4.attach(11);    
  //diz que o motor está ligado ao pino 9
  motor5.attach(12);  

}

//nesta parte do programa temos os comandos que se repetem
void loop() { 

  //comando para mandar o servo para a posição 180
  motor1.write(180); 
  //comando para mandar o servo para a posição 180
  motor2.write(180);
  //comando para mandar o servo para a posição 180
  motor3.write(180); 
  //comando para mandar o servo para a posição 180
  motor4.write(180); 
  //comando para mandar o servo para a posição 180
  motor5.write(180); 

  //espera 500 ms
  delay(500); 

  //comando para mandar o servo para a posição 0
  motor1.write(0);
    //comando para mandar o servo para a posição 0
  motor2.write(0);
    //comando para mandar o servo para a posição 0
  motor3.write(0);
  //comando para mandar o servo para a posição 0
  motor4.write(0);
    //comando para mandar o servo para a posição 0
  motor5.write(0);

  //espera 500 ms
  delay(500); 

}
