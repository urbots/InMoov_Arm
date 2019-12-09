#include <Servo.h>

#define PULGAR 3
#define INDICE 5
#define CORAZON 6
#define ANULAR 9
#define MENYIQUE 10
#define MUNYECA 11


Servo servos[6];

int idx = 0;

void setup() {

  Serial.begin(9600);
  Serial.println("INSTRUCIONES:\n<servo idx> <angulo>\n\n0 MENIQUE\n1 ANULAR\n2 CORAZON\n3 INDICE\n4 PULGAR\n5 MUNECA");

  servos[0].attach(MENYIQUE);
  servos[1].attach(ANULAR);
  servos[2].attach(CORAZON);
  servos[3].attach(INDICE);
  servos[4].attach(PULGAR);
  
  servos[5].attach(MUNYECA);

/*
  for (int i = 0; i < 6; i++ {
    servos[i].write(0);
  }
*/
}

void loop() {
  if (Serial.available()) {
    idx = Serial.parseInt();
    servos[idx].write(Serial.parseInt());
  }

  delay(5);
}
