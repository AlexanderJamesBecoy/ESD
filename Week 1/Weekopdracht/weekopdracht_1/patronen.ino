const int delayTimeDiff = 50;
int delayTime = 500;

void patroonHeen(boolean directionIsRight)
{
  for(int pinIndex = 0; pinIndex < getNrOfLeds(); pinIndex++)
  {
    int pinNumber = pinIndex;
    if(!directionIsRight)
      pinNumber = getNrOfLeds() - pinIndex - 1;
    ledControlSetLedOn(pinNumber);
    delay(delayTime);
    ledControlSetLedOff(pinNumber);
  }
}

void patroonSamenvoegen()
{
  int nrOfCouples = getNrOfLeds() / 2;
  for(int pinNumber = 0; pinNumber < nrOfCouples; pinNumber++)
  {
    int pinPartner = getNrOfLeds() - pinNumber - 1;
    ledControlSetLedOn(pinNumber);
    ledControlSetLedOn(pinPartner);
    delay(delayTime);
    ledControlSetLedOff(pinNumber);
    ledControlSetLedOff(pinPartner);
  }
}

void increaseDelayTime()
{
  if(delayTime < 1000)
  {
    delayTime += delayTimeDiff;
    Serial.println(String(delayTime) + "ms");
  }
  else
    Serial.println("Already at its maximum.");
}

void decreaseDelayTime()
{
  if(delayTime > 50)
  {
    delayTime -= delayTimeDiff;
    Serial.println(String(delayTime) + "ms");
  }
  else
    Serial.println("Already at its minimum.");
}

