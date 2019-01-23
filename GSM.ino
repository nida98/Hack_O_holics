
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
void setup()
{
  mySerial.begin(9600);   
  Serial.begin(9600);    
  delay(20000);
}
void loop()
{
  mySerial.println("AT+CMGF=1");   
  mySerial.println("AT+CMGS=\"+919972434486\"\r"); 
  delay(1000);
  //if(water level in the tank is less)
  mySerial.println("Please Refill the water tank");
  mySerial.println((char)26);
 
}
