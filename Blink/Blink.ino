// #include <iostream>
int led1 = 12;
int led2 = 10;
int buzzer = 2;
int potPin = 3; // select the input pin for the potentiometer
// int ledPin = 13; // select the pin for the LED
int val = 0; // variable to store the value coming from the sensor

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  val = analogRead(potPin);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  tone(buzzer, 2000);
  delay(700);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  tone(buzzer, 1000);
  delay(700);
}
