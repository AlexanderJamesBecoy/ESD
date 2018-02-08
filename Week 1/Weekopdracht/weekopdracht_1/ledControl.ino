const int NROFLEDS = 8;
const int PINS[NROFLEDS] = {6, 7, 8, 9, 10, 11, 12, 13};

void ledControlSetup()
{
  for(int pinNumber = 0; pinNumber < NROFLEDS; pinNumber++)
  {
    pinMode(PINS[pinNumber], OUTPUT);
  }
}

void ledControlSetLedOn(int pinNumber)
{
  digitalWrite(PINS[pinNumber], HIGH);
}

void ledControlSetLedOff(int pinNumber)
{
  digitalWrite(PINS[pinNumber], LOW);
}

void ledControlAllLedsOn()
{
  for(int pinNumber = 0; pinNumber < NROFLEDS; pinNumber++)
  {
    digitalWrite(PINS[pinNumber], HIGH);
  }
}

void ledControlAllLedsOff()
{
  for(int pinNumber = 0; pinNumber < NROFLEDS; pinNumber++)
  {
    digitalWrite(PINS[pinNumber], LOW);
  }
}

int getNrOfLeds()
{
  return NROFLEDS;
}

