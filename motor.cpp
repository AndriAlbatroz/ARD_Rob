#include "Motor.h"

Motor::Motor() {

}

void Motor::Init(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward) {
  _pin_enable = pin_enable;
  _pin_forward = pin_forward;
  _pin_backward = pin_backward;

  pinMode(_pin_enable, OUTPUT);
  pinMode(_pin_forward, OUTPUT);
  pinMode(_pin_backward, OUTPUT);  
}

void Motor::Forward() {
  this->Forward(255);
}

void Motor::Forward(unsigned short vel) {
  this->Stop();

  delay(10);
  
  digitalWrite(_pin_forward, HIGH);
  digitalWrite(_pin_backward, LOW);

  analogWrite(_pin_enable, vel);
}

void Motor::Backward() {
 this->Backward(255); 
}

void Motor::Backward(unsigned short vel) {
  this->Stop();

  delay(10);
  
  digitalWrite(_pin_forward, LOW);
  digitalWrite(_pin_backward, HIGH);

  analogWrite(_pin_enable, vel);
}

void Motor::Stop() {
  digitalWrite(_pin_forward, LOW);
  digitalWrite(_pin_backward, LOW);
  
  analogWrite(_pin_enable, 0);
}
