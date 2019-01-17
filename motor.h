#ifndef Motor_H
#define Motor_H
    
#include "Arduino.h"
    
class Motor {
    public:    
    Motor();
    void Init(uint8_t pin_enable, uint8_t pin_forward, uint8_t pin_backward);
    void Forward();
    void Forward(unsigned short vel);
    void Backward();
    void Backward(unsigned short val);
    void Right();
    void Left();
    void Stop();
    private:
    byte _pin_enable;
    byte _pin_forward;
    byte _pin_backward;
};
    
#endif
