/*
* Goals: have two ultrasonic sensors, positioned 45 and -45 degrees from
* the front of a car, be able to determine the location of walls and doors
* for a maze solver
*
*/

// sensor 1
const int pingPin1 = 9;
const int echoPin1 = 8;
// sensor 2
const int pingPin2 = 7;
const int echoPin2 = 6;

const int timeout=20000;

void setup() {
   Serial.begin(31250);
   pinMode(pingPin1, OUTPUT);
   pinMode(pingPin2, OUTPUT);
   pinMode(echoPin1, INPUT);
   pinMode(echoPin2, INPUT);
}

void loop() {
  // measure the time taken for the pulse and the distance to the object
  long time1, cm1;
  long time2, cm2;
  
  // first sensor
  digitalWrite(pingPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin1, LOW);
  time1 = pulseIn(echoPin1, HIGH,timeout);



  // second sensor
  digitalWrite(pingPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin2,HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin2, LOW);
  time2 = pulseIn(echoPin2, HIGH,timeout);

  cm1 = time1/29/2;
  cm2 = time2/29/2;

  Serial.print("cm1:");
  Serial.print(cm1);
  Serial.print(",");
  Serial.print("cm2:");
  Serial.print(cm2);
  // Serial.print(",");
  // Serial.print("time1:");
  // Serial.print(time1);
  Serial.println();

  // wait some time for the sensor's waves to die out
  delayMicroseconds(50);
  // delay(10);

}


long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}