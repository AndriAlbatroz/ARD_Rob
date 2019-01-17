#include "Driver.h"

Driver::Driver(Motor ma_r, Motor ma_l, Motor mp_r, Motor mp_l) {
    _ma_r = ma_r;
    _ma_l = ma_l;
    _mp_r = mp_r;
    _mp_l = mp_l;
}

void Driver::Forwarding() {
    _ma_r.Forward();
    _ma_l.Forward();
    _mp_r.Forward();
    _mp_l.Forward();
}

void Driver::Backwarding() {
    _ma_r.Backward();
    _ma_l.Backward();
    _mp_r.Backward();
    _mp_l.Backward();
}

void Driver::Stopping() {
    _ma_r.Stop();
    _ma_l.Stop();
    _mp_r.Stop();
    _mp_l.Stop();
}