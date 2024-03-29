#pragma once

#include <Arduino.h>
#include "Cart.h"

#define FORWARD true
#define BACKWARD false
#define RIGHT 1
#define LEFT 2
#define startPos 4
#define lilAwayFromSwitch 5

class CartController
{
private:
    Cart cart {};
    const int32_t positions[6];
    const uint16_t validatingPeriod;
public:
    CartController();

    void setup();

    void calibrate();

    void setDir(const bool& dir);

    void move() const;

    void moveToPos(uint8_t posIndex, const bool& dir);

    void fukDaSwitch() const;

    void stopBullyingEndSwitch() const;

    bool isInitPos() const;

    void blockMovement() const;

    void allowMovement() const;

    void setPos(int32_t posToSet);
};
