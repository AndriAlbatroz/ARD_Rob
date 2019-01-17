#include "Motor.h"

// Motori anteriori
#define ENA_A 3 // Nero
#define ENB_A 2 // Viola
#define IN1_A 4 // Verde - LEFT BACK
#define IN2_A 5 // Grigio - LEFT FORW
#define IN3_A 6 // Blu - RIGHT FORW
#define IN4_A 7 // Giallo - RIGHT BACK

// Motori posteriori
#define ENA_B 9 // Marrone
#define ENB_B 8 // Bianco
#define IN1_B 10 // Giallo - RIGHT FORW
#define IN2_B 11 // Arancio - RIGHT BACK
#define IN3_B 12 // Verde - LEFT BACK
#define IN4_B 13 // Viola - LEFT FORW

// Motori anteriori
Motor ma_l;
Motor ma_r;

// Motori posteriori
Motor mp_r;
Motor mp_l;

String code;

void setup() {
  ma_l.Init(ENA_A, IN2_A, IN1_A);
  ma_r.Init(ENB_A, IN3_A, IN4_A);

  mp_r.Init(ENA_B, IN1_B, IN2_B);
  mp_l.Init(ENB_B, IN4_B, IN3_B);
  
  Serial.begin(9600);
}

void loop() {
  char asci;
  code = "";
  
  do {
    if (Serial.available() > 0) {
      asci = Serial.read();      
      if (asci != '?') {
       code.concat((char)asci); 
      }      
    }
  } while(asci != '?');
  asci = ' ';

  delay(100);

  if (code == "1|1") {
    ma_l.Forward();
    ma_r.Forward();
    mp_l.Forward();
    mp_r.Forward();
  } else if (code == "-1|-1") {
    ma_l.Backward();
    ma_r.Backward();
    mp_l.Backward();
    mp_r.Backward();
  } else if (code == "0|0") {
    ma_l.Stop();
    ma_r.Stop();
    mp_l.Stop();
    mp_r.Stop();
  } else if (code == "1|-1") {
    ma_l.Forward();
    ma_r.Backward();
    mp_l.Forward();
    mp_r.Backward();    
  } else if (code == "-1|1") {
    ma_l.Backward();
    ma_r.Forward();
    mp_l.Backward();
    mp_r.Forward();
  }

  delay(50);
  
  Serial.flush();

  delay(50);
}
