
#include <Arduino.h>

// Define the pins that we will use
#define SENSOR 33
#define LED 26

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
