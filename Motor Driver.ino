// delay1 is for the driving part
  int delay1 = 500;
  // delay2 is for the stopped
  int delay2 = 50;

void setup() {
  // first input for the first motor
  pinMode(3,OUTPUT);
  // second input for the first motor
  pinMode(4,OUTPUT);

  // first input for the second motor
  pinMode(5,OUTPUT);
  // second input for the second motor
  pinMode(6,OUTPUT);

  


}

void loop() {
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  delay(delay2);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(delay1);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay(delay2);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(delay1);

}
