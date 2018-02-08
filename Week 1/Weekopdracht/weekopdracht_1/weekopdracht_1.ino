/*
 * Weekopdracht 1 - Lichtkrant Rijkswaterstaat
 * Door Alexander James Becoy [597880] - I1DC
 * Gemaakt op 8/2/2018
 */
char data = '0';

void setup() {
  Serial.begin(9600);
  ledControlSetup();
}

void loop() {
  if(Serial.available() > 0)
  {
    data = Serial.read();
    Serial.println(data);
  }
  
  if(data == 'H' || data == 'R') {
    patroonHeen(true);
  }
  else if(data == 'L') {
    patroonHeen(false);
  }
  else if(data == 'S' || data == 's') {
    patroonSamenvoegen();
  }
  else if(data == '+' || data == '-' || data == 'E')
  {
    if(data == '+') {
      increaseDelayTime();
    }
    else if(data == '-') {
      decreaseDelayTime();
    }
    else {
      ledControlAllLedsOff();
    }
    data = '0';
  }
  
}

