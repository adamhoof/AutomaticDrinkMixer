#pragma once

#include "Scale.h"

class ScaleController
{
private:
    HX711_ADC scale {doutPin, sckPin};
public:
    ScaleController();

    void setup();

    int getWeight();

    void tare();
};
