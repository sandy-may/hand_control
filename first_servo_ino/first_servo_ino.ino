
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

//functions to set thumb position and acceptable limits
void thumbPos(int pos)
{
  deg = constrain(pos, thumbMin, thumbMax);
  thumb.write(pos);
  delay(100);
}
//functions to set index position and acceptable limits
void indexPos(int pos)
{
  deg = constrain(pos, indexMin, indexMax);
  index.write(pos);
  delay(100);
}
//functions to set middle position and acceptable limits
void middlePos(int pos)
{
  deg = constrain(pos, middleMin, middleMax);
  middle.write(pos);
  delay(100);
}
//functions to set ring position and acceptable limits
void ringPos(int pos)
{
  deg = constrain(pos, ringMin, ringMax);
  ring.write(pos);
  delay(100); 
}
//functions to set little position and acceptable limits
void littlePos(int pos)
{
  deg = constrain(pos, littleMin, littleMax);
  little.write(pos);
  delay(100); 
}
//show palm
void palm()
{
  thumbPos(40);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(1);
}
//show fist
void fist()
{
  thumbPos(120);
  indexPos(90);
  middlePos(20);
  ringPos(120);
  littlePos(110);
}
//show number 1
void count1()
{
  thumbPos(120);
  indexPos(1);
  middlePos(20);
  ringPos(120);
  littlePos(110);
}
//show number 2
void count2()
{
  thumbPos(120);
  indexPos(1);
  middlePos(110);
  ringPos(120);
  littlePos(110);
}
//show number 3
void count3()
{
  thumbPos(120);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(110); 
}
//show number 4
void count4()
{
  thumbPos(120);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(1); 
}
//show number 5
void count5()
{
  thumbPos(40);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(1); 
}
//show number 6
void count6()
{
  thumbPos(80);
  indexPos(90);
  middlePos(20);
  ringPos(120);
  littlePos(110);
}
//show number 7
void count7()
{
  thumbPos(40);
  indexPos(1);
  middlePos(20);
  ringPos(120);
  littlePos(110);
}
//show number 8
void count8()
{
  thumbPos(40);
  indexPos(1);
  middlePos(110);
  ringPos(120);
  littlePos(110); 
}
//show number 9
void count9()
{
  thumbPos(40);
  indexPos(1);
  middlePos(110);
  ringPos(30);
  littlePos(110); 
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
//enter behaviours to loop here, with a delay of 1000ms (1s) or higher
void loop()
{
  palm();
  delay(2000);
  fist();
  delay(2000);
  count1();
  delay(2000);
  count2();
  delay(2000);
  count3();
  delay(2000);
  count4();
  delay(2000);
  count5();
  delay(2000);
  fist();
  delay(2000);
  count6();
  delay(2000);
  count7();
  delay(2000);
  count8();
  delay(2000);
  count9();
  delay(2000);
}
