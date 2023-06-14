// SD Card Module
#include <SPI.h>
#include <SD.h>

// Real Time Clock (RTC)
#include "RTClib.h"
RTC_Millis rtc;     // Software Real Time Clock (RTC)
DateTime rightNow;  // used to store the current time.

// SD Card - Confirm Pin
#define SDpin 53

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Open serial communications and wait for port to open:
  while (!Serial) {
    delay(1);  // wait for serial port to connect. Needed for native USB port only
  }

  // SD Card initialisation
  Serial.print("Initializing SD card...");
//  if (!SD.begin(SDpin)) {
//    Serial.println("initialization failed!");
//    //while (1)
//      //;
//  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

void SecurityLights()

// Traffic Lights - LED Outputs
#define ledRed A0
#define ledYellow A1 
#define ledGreen A2

//Potentiometer
#define pot A3

int potValue = analogRead(pot);            // reads the value of the potentiometer (value between 0 and 1023)

// The lights will turn on depending on how close the person is. Using varibles and int parameters. 0-510 red, 511-1023 green (If greater than 510 turn on light)
// if > 510
  // Output to ledGreen (A2) (Pin 2)
 // else 
  //Output to ledRed (A0) (Pin 0)

((//int potentiometerValue = analogRead(POTENTIOMETER_PIN);
//int brightness = potentiometerValue / 4;
//analogWrite(LED_PIN, brightness);))


 void TemperatureControledFan(){

 // DC Motor & Motor Module - L298N
motor.setSpeed(70);
// Moisture Sensor
pinMode(moisturePin, INPUT);

//Depending on how high the humity is (via moisture sensor) changes how fast the fan is
//int fan
//loop 
//Read humidity
//If humidity <50 
  //digitaWrite(M1, LOW)
//else 
  //digitalWrite(M1, HIGH) 

void PanicButton(){
 //When Button is pressed, Motor Module moves forwards and closes blinds and calls police, if button is pressed again, open blinds.

int crashSensorValue = digitalRead(crashSensor);
 
  motor.forward();
delay(1000);
motor.stop();
delay(1000);
motor.backward();
delay(1000);
}
  //Read CrashSensor
  //if button = pressed
    //Loop{
    // digital.Write(motor.forward);
   // Call police (unsure how this would be coded){
     // if button = pressed again
       //digital.Write(motor.backward);
}
 

 
