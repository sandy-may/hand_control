#include <Servo.h>
Servo index;
int servoPos = 20;
int servoClick = 5;

void setup()
{
  index.attach(3);
  index.write(20);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW); 
}

void loop()
{
  for (int i = 0; i < 3; i++)
  {
    index.write(servoPos);
    Serial.print(servoClick);
    Serial.print("\t");
    Serial.println(servoPos);
    servoPos = servoPos + servoClick;
  }
}

