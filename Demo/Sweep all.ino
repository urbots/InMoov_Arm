#include <Servo.h>

#define PULGAR 3
#define INDICE 5
#define CORAZON 6
#define ANULAR 9
#define MEÑIQUE 10
#define MUÑECA 11

Servo pulgar, indice, corazon, anular, meñique, muñeca;

int pos = 0;

void setup() {
  pulgar.attach(PULGAR);
  indice.attach(INDICE);
  corazon.attach(CORAZON);
  anular.attach(ANULAR);
  meñique.attach(MEÑIQUE);
  muñeca.attach(MUÑECA);

  pulgar.write(0);
  indice.write(0);
  corazon.write(0);
  anular.write(0);
  meñique.write(0);
  muñeca.write(0);
}

void loop() {
  sweepPulgar();
  sweepIndice();
  sweepCorazon();
  sweepAnular();
  sweepMeñique();
  //sweepMuñeca();
}

void sweepPulgar() {
  //Cierra pulgar
  for (pos = 0; pos <= 60; pos++) {
    pulgar.write(pos);
    delay(15);
  }

  //Abre pulgar
  for (pos = 60; pos >= 0; pos--) {
    pulgar.write(pos);
    delay(15);
  }
}

void sweepIndice() {
  //Cierra indice
  for (pos = 0; pos <= 60; pos++) {
    indice.write(pos);
    delay(15);
  }

  //Abre indice
  for (pos = 60; pos >= 0; pos--) {
    indice.write(pos);
    delay(15);
  }
}

void sweepCorazon() {
  //Cierra corazon
  for (pos = 0; pos <= 60; pos++) {
    corazon.write(pos);
    delay(15);
  }

  //Abre corazon
  for (pos = 60; pos >= 0; pos--) {
    corazon.write(pos);
    delay(15);
  }
}

void seeepAnular() {
  //Cierra anular
  for (pos = 0; pos <= 60; pos++) {
    anular.write(pos);
    delay(15);
  }

  //Abre anular
  for (pos = 60; pos >= 0; pos--) {
    anular.write(pos);
    delay(15);
  }
}

void sweepMeñique() {
  //Cierra meñique
  for (pos = 0; pos <= 60; pos++) {
    meñique.write(pos);
    delay(15);
  }

  //Abre meñique
  for (pos = 60; pos >= 0; pos--) {
    meñique.write(pos);
    delay(15);
  }
}

void sweepMuñeca() {
  //Derecha muñeca
  for (pos = 0; pos <= 60; pos++) {
    muñeca.write(pos);
    delay(15);
  }

  //Izquerda muñeca
  for (pos = 60; pos >= 0; pos--) {
    muñeca.write(pos);
    delay(15);
  }
}

