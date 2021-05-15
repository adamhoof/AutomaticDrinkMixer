#include "DrinkPreparator.h"

DrinkPreparator::ElementIds elementIds;

DrinkPreparator::DrinkPreparator()
    : drinkContents(B10000000)//for 16bit storage, can use 32768 as initial value - MSB of uint16_t set to 1 (only for nice bit reading in BIN, shows all the digits anytime, not necessary)
{}

void DrinkPreparator::modifyContents(const uint8_t *receivedIdAndValue)
{
  if (receivedIdAndValue[0] == elementIds.idA) {

    bitWrite(drinkContents, 0, receivedIdAndValue[1]);

  } else if (receivedIdAndValue[0] == elementIds.idB) {

    bitWrite(drinkContents, 1, receivedIdAndValue[1]);

  } else if (receivedIdAndValue[0] == elementIds.idC) {

    bitWrite(drinkContents, 2, receivedIdAndValue[1]);

  } else if (receivedIdAndValue[0] == elementIds.idD) {

    bitWrite(drinkContents, 3, receivedIdAndValue[1]);

  } else if (receivedIdAndValue[0] == elementIds.idWater) {

    bitWrite(drinkContents, 4, receivedIdAndValue[1]);

  } else if (receivedIdAndValue[0] == elementIds.idCancelButton) {

    drinkContents = B10000000;

  } else if (receivedIdAndValue[0] == elementIds.idMakeDrinkButton) {

    bitWrite(drinkContents, 6, 1);
    Serial.println("atleast");
    delay(1000);
  }
}

void DrinkPreparator::setElementIds(const uint8_t *receivedElemIds)
{
  elementIds.idA = receivedElemIds[0];
  elementIds.idB = receivedElemIds[1];
  elementIds.idC = receivedElemIds[2];
  elementIds.idD = receivedElemIds[3];
  elementIds.idWater = receivedElemIds[4];
  elementIds.idCancelButton = receivedElemIds[5];
  elementIds.idMakeDrinkButton = receivedElemIds[6];

}