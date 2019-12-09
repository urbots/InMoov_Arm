#include <Servo.h>

#define PULGAR 3
#define INDICE 5
#define CORAZON 6
#define ANULAR 9
#define MENYIQUE 10
#define MUNYECA 11

//Minimo significa dedo abierto, maximo cerrado
#define MIN_MENYIQUE 180
#define MAX_MENYIQUE 20

#define MIN_ANULAR 0
#define MAX_ANULAR 140

#define MIN_CORAZON 140
#define MAX_CORAZON 30

#define MIN_INDICE 20
#define MAX_INDICE 130

#define MIN_PULGAR 160
#define MAX_PULGAR 10

//TODO
#define MIN_MUNYECA 0
#define MAX_MUNYECA 0
Servo pulgar, indice, corazon, anular, menyique, munyeca;

int pos = 0;

void setup() {
  Serial.begin(9600);
  pulgar.attach(PULGAR);
  indice.attach(INDICE);
  corazon.attach(CORAZON);
  anular.attach(ANULAR);
  menyique.attach(MENYIQUE);
  munyeca.attach(MUNYECA);

  //Dedos abiertos
  pulgar.write(MIN_PULGAR);
  indice.write(MIN_INDICE);
  corazon.write(MIN_CORAZON);
  anular.write(MIN_ANULAR);
  menyique.write(MIN_MENYIQUE);
  //munyeca.write(MIN_MUNYECA);
}

void loop() {
  sweep(pulgar, MIN_PULGAR, MAX_PULGAR);
  sweep(indice, MIN_INDICE, MAX_INDICE);
  sweep(corazon, MIN_CORAZON, MAX_CORAZON);
  sweep(anular, MIN_ANULAR, MAX_ANULAR);
  sweep(menyique, MIN_MENYIQUE, MAX_MENYIQUE);
}

void sweep(Servo servo, int min_val, int max_val) {
  int lmin = min(min_val, max_val);
  int lmax = max(min_val, max_val);

  if (lmin == min_val) {
    for (pos = lmin; pos < lmax; pos++) {
      servo.write(pos);
      delay(15);
    }
    
    //Abre pulgar
    for (pos = lmax; pos > lmin; pos--) {
      servo.write(pos);
      delay(15);
    }
  } else {
    //Abre pulgar
    for (pos = lmax; pos > lmin; pos--) {
      servo.write(pos);
      delay(15);
    }
    for (pos = lmin; pos < lmax; pos++) {
      servo.write(pos);
      delay(15);
    }
  }
}

