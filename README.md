# Hack_O_holics
PROJECT TITLE:
SMART IRRIGATION SYSTEM-The aim of this project is to develop a smart irrigation monitoring system using arduino UNO. Focus area will be parameters such as temperature and soil moisture. An automated irrigation system is developed to optimize water use for different agricultural crops according to their VWC(volumetric water content). The objective of this project is to control the water pump automatically, using the readings of the temperature and soil moisture sensor.

TECH/FRAMEWORK USED:
Arduino IDE 1.8.8

DESCRIPTION OF THE CODE:
sensors.ino - This code implements reading the values of soil moisture and DHT11 Sensor. It triggers the water pump motor which is connected through a relay when the moisture value goes below a specific limit.
GSM.ino - This code is used to monitor the water reservoir which supplies water to the field and when the tank is almost empty, a message is sent to the farmer using GSM SIM900A Module.

