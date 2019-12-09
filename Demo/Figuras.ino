#include<Servo.h>

Servo pul; 
Servo ind;
Servo cor;
Servo anul;
Servo meny;// create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  // PINS DE CONEXION SERVOS (PWM~)
  pul.attach(3);//Pulgar pin 3
  ind.attach(5); //Indice pin 5
  cor.attach(6); //Corazon pin 6
  anul.attach(9); //Anular pin 9
  meny.attach(10);//Menyique pin 10
}


void loop() {
  //ABRIR MANO
  pulgar(1);  indice(1);  corazon(1); anular(1); menyique(1);

 /* //VICTORIA
  menyique(0); anular(0); pulgar(0);

  //METAL
  pulgar(1);  corazon(0); menyique(1);

  //BUEN ROLLO
  indice(0);

  //INSULTO
  menyique(0); corazon(1); pulgar(0);

  //OK
  anular(1); menyique(1);

  //CERRAR MANO 1
  corazon(0);  anular(0); menyique(0);*/

    //CERRAR MANO 2
  pulgar(0);  indice(0); corazon(0);  anular(0); menyique(0);
}


//FUNCIONES 
void pulgar(int este) {
   if(este == 0){ //cerrar
      for(int pos = 170; pos >= 40; pos--) {
        pul.write(pos);
        delay(15);
      }
   }
   if(este == 1){  //abrir
      for(int pos = 40; pos <= 170; pos++) {
        pul.write(pos); 
        delay(15);
      }
   }
}

void indice(int este) {
   if(este == 1){ //abrir
      for(int pos = 90; pos >= 0; pos--) {
        ind.write(pos);
        delay(15);
      }
   }
   if(este == 0){  //cerrar
      for(int pos = 0; pos <= 90; pos++) {
        ind.write(pos);
        delay(15);
      }
   }
}

void corazon(int este) {
   if(este == 0){ //cerrar
      for(int pos = 180; pos >= 0; pos--) {
        cor.write(pos);
        delay(15);
      }
   }
   if(este == 1){  //abrir
      for(int pos = 0; pos <= 180; pos++) {
        cor.write(pos);
        delay(15);
      }
   }
}

void anular(int este) {
   if(este == 1){ //abrir
      for(int pos = 180; pos >= 0; pos--) {
        anul.write(pos);
        delay(15);
      }
   }
   if(este == 0){  //cerrar
      for(int pos = 0; pos <= 180; pos++) {
        anul.write(pos);
        delay(15);
      }
   }
}

void menyique(int este) {
   if(este == 0){ //cerrar
      for(int pos = 180; pos >= 75; pos--) {
        meny.write(pos);
        delay(15);
      }
   }
   if(este == 1){  //abrir
      for(int pos = 75; pos <= 180; pos++) {
        meny.write(pos);
        delay(15);
      }
   }
}
