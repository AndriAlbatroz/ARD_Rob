#include "Driver.h"


Driver::Driver() {
  
}

void Driver::Execute(String str) {
  
}

void Driver::SetMotor_AR(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward) {
  this->_ma_r.Init(pin_enable, pin_forward, pin_backward);
}

void Driver::SetMotor_AL(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward) {
  this->_ma_l.Init(pin_enable, pin_forward, pin_backward);
}

void Driver::SetMotor_PR(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward) {
  this->_mp_r.Init(pin_enable, pin_forward, pin_backward);
}

void Driver::SetMotor_PL(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward) {
  this->_mp_l.Init(pin_enable, pin_forward, pin_backward);
}

void Driver::Forward() {
  this->_ma_r.Forward();
  this->_ma_l.Forward();
  this->_mp_r.Forward();
  this->_mp_l.Forward();
}

void Driver::Backward() {
  this->_ma_r.Backward();
  this->_ma_l.Backward();
  this->_mp_r.Backward();
  this->_mp_l.Backward();
}

void Driver::Stop() {
  this->_ma_r.Stop();
  this->_ma_l.Stop();
  this->_mp_r.Stop();
  this->_mp_l.Stop();
}

void Driver::Right() {
  this->_ma_l.Forward();
  this->_ma_r.Backward();
  this->_mp_l.Forward();
  this->_mp_r.Backward(); 
}

void Driver::Left() {
  this->_ma_l.Backward();
  this->_ma_r.Forward();
  this->_mp_l.Backward();
  this->_mp_r.Forward(); 
}

