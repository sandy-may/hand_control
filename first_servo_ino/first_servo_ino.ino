
#include <Servo.h>

//create the thumb servo
Servo thumb;
int thumbMin = 80;
int thumbMax = 100;

int deg = 0;

void thumbPos(int pos)
{
  deg = constrain(pos, thumbMin, thumbMax);
  thumb.write(deg);
}

void moving()
{
  thumbPos(80);
}

void setup()
{
  thumb.attach(0);
}

void loop()
{
  thumbPos(80);
  moving*();
}
