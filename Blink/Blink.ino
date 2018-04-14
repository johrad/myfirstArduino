int led1 = 12;
int led2 = 10;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);
  delay(50); 
  digitalWrite(led1, LOW);
  delay(50);     
  digitalWrite(led1, HIGH);
  delay(50);    
  digitalWrite(led2, HIGH);
  delay(50);                        
  digitalWrite(led1, LOW); 
  delay(3500);
  digitalWrite(led2, LOW); 
  delay(1000);
}
