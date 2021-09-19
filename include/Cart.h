#pragma once

#include <Arduino.h>

class Cart{
public:
    const uint8_t motorEnablePin{A5};
    const uint8_t dirPin{A3};
    const uint8_t stepPin{A4};
    const uint8_t endSwitchPin{7};
    uint8_t stepDelay{80};
    int8_t dir{0};
    int32_t pos{0};

    Cart();
};