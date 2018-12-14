// #include <iostream>
int led1 = 12;
int led2 = 10;
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);

  delay(100);
}
