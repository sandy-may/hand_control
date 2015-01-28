
#include <Servo.h>

//create servos for each finger and set min and max values
Servo thumb;
int thumbUp = 40;
int thumbDown = 120;

Servo index;
int indexUp = 1;
int indexDown = 90;

Servo middle;
int middleUp = 110;
int middleDown = 20;

Servo ring;
int ringUp = 30;
int ringDown = 120;

Servo little;
int littleUp = 1;
int littleDown = 110;

int deg = 0;

//functions to set thumb position and acceptable limits
void thumbPos(int pos)
{
  deg = constrain(pos, thumbUp, thumbDown);
  thumb.write(pos);
  delay(100);
}
//functions to set index position and acceptable limits
void indexPos(int pos)
{
  deg = constrain(pos, indexUp, indexDown);
  index.write(pos);
  delay(100);
}
//functions to set middle position and acceptable limits
void middlePos(int pos)
{
  deg = constrain(pos, middleUp, middleDown);
  middle.write(pos);
  delay(100);
}
//functions to set ring position and acceptable limits
void ringPos(int pos)
{
  deg = constrain(pos, ringUp, ringDown);
  ring.write(pos);
  delay(100); 
}
//functions to set little position and acceptable limits
void littlePos(int pos)
{
  deg = constrain(pos, littleUp, littleDown);
  little.write(pos);
  delay(100); 
}
//show palm
void palm(int sleep)
{
  thumbPos(thumbUp);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringUp);
  littlePos(littleUp);
  delay(sleep);
}
//show fist
void fist(int sleep)
{
  thumbPos(thumbDown);
  indexPos(indexDown);
  middlePos(middleDown);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep);
}
//show number 1
void count1(int sleep)
{
  thumbPos(thumbDown);
  indexPos(indexUp);
  middlePos(middleDown);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep);
}
//show number 2
void count2(int sleep)
{
  thumbPos(thumbDown);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep);
}
//show number 3
void count3(int sleep)
{
  thumbPos(thumbDown);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringUp);
  littlePos(littleDown);
  delay(sleep); 
}
//show number 4
void count4(int sleep)
{
  thumbPos(thumbDown);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringUp);
  littlePos(littleUp); 
  delay(sleep);
}
//show number 5
void count5(int sleep)
{
  thumbPos(thumbUp);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringUp);
  littlePos(littleUp); 
  delay(sleep);
}
//show number 6
void count6(int sleep)
{
  thumbPos(60);
  indexPos(indexDown);
  middlePos(middleDown);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep);
}
//show number 7
void count7(int sleep)
{
  thumbPos(thumbUp);
  indexPos(indexUp);
  middlePos(middleDown);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep);
}
//show number 8
void count8(int sleep)
{
  thumbPos(thumbUp);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringDown);
  littlePos(littleDown);
  delay(sleep); 
}
//show number 9
void count9(int sleep)
{
  thumbPos(thumbUp);
  indexPos(indexUp);
  middlePos(middleUp);
  ringPos(ringUp);
  littlePos(littleDown);
  delay(sleep); 
}
//attach servos to board ports
void setup()
{
  thumb.attach(4);
  index.attach(5);
  middle.attach(6);
  ring.attach(7);
  little.attach(8);
}
//auto count to 9 
void countTo9(int sleep)
{
  fist(sleep);
  count1(sleep);
  count2(sleep);
  count3(sleep);
  count4(sleep);
  count5(sleep);
  fist(sleep);
  count6(sleep);
  count7(sleep);
  count8(sleep);
  count9(sleep);
}

void thumbUpSign(int sleep)
{
  fist(500);
  thumbPos(thumbUp);
  delay(sleep);
}

void hornSign(int sleep)
{
  fist(500);
  indexPos(indexUp);
  littlePos(littleUp);
  delay(sleep); 
}
//enter behaviours to loop here, with a delay of 1000ms (1s) or higher
void loop()
{
  thumbUpSign(1000);
  palm(1000);
  countTo9(1000);
}
