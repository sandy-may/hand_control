
#include <Servo.h>

//create servos for each finger and set min and max values
Servo thumb;
int thumbMin = 40;
int thumbMax = 120;

Servo index;
int indexMin = 1;
int indexMax = 90;

Servo middle;
int middleMin = 110;
int middleMax = 20;

Servo ring;
int ringMin = 30;
int ringMax = 120;

Servo little;
int littleMin = 1;
int littleMax = 110;

int deg = 0;

void thumbPos(int pos)
{
  deg = constrain(pos, thumbMin, thumbMax);
  thumb.write(pos);
}

void indexPos(int pos)
{
  deg = constrain(pos, indexMin, indexMax);
  index.write(pos);
}

void middlePos(int pos)
{
  deg = constrain(pos, middleMin, middleMax);
  middle.write(pos);
}

void ringPos(int pos)
{
  deg = constrain(pos, ringMin, ringMax);
  ring.write(pos); 
}

void littlePos(int pos)
{
  deg = constrain(pos, littleMin, littleMax);
  little.write(pos); 
}

void palm()
{
  thumbPos(40);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(1);
}

void fist()
{
  thumbPos(120);
  indexPos(90);
  middlePos(20);
  ringPos(120);
  littlePos(110); 
}

void count1()
{
  thumbPos(120);
  indexPos(1);
  middlePos(20);
  ringPos(120);
  littlePos(110); 
}

void count2()
{
  thumbPos(120);
  indexPos(1);
  middlePos(110);
  ringPos(120);
  littlePos(110); 
}

void count3()
{
  thumbPos(120);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(110); 
}

void setup()
{
  thumb.attach(4);
  index.attach(5);
  middle.attach(6);
  ring.attach(7);
  little.attach(8);
}

void loop()
{
  palm();
  delay(3000);
  fist();
  delay(3000);
  count1();
  delay(3000);
  count2();
  delay(3000);
  count3();
  delay(3000);
}
