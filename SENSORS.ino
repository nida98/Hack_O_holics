#include "dht.h"
#define dht_apin A0 
 const int sensor_pin = A1;
 int pumpPin = 7; 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
  pinMode(pumpPin, OUTPUT);
 
}
 
void loop(){
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
     float moisture_percentage;
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  Serial.print("Moisture Percentage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");

  if (moisture_percentage<40)
  {
  digitalWrite(pumpPin, HIGH);
    delay(30000);
    digitalWrite(pumpPin, LOW);
  }
  else
    digitalWrite(pumpPin, LOW);
 
}
