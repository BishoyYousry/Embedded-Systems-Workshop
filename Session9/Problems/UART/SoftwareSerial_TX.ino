//TX
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop()
{
  mySerial.print('A');
  delay(100);
}
