#include "Cart.h"

Cart::Cart() : motorEnablePin {19}, dirPin {17}, stepPin {18}, endSwitchPin {13},
               stepDelay {70}, dir {-1}, pos {0}
{}
