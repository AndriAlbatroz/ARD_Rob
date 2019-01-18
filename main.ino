#include "Driver.h"

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

Driver driver;

void setup() {
  driver.SetMotor_AR(ENB_A, IN3_A, IN4_A);
  driver.SetMotor_AL(ENA_A, IN2_A, IN1_A);

  driver.SetMotor_PR(ENA_B, IN1_B, IN2_B);
  driver.SetMotor_PL(ENB_B, IN4_B, IN3_B);
}

void loop() {

}


//char asci;
//  code = "";
//  
//  do {
//    if (Serial.available() > 0) {
//      asci = Serial.read();      
//      if (asci != '?') {
//       code.concat((char)asci); 
//      }      
//    }
//  } while(asci != '?');
//  asci = ' ';

