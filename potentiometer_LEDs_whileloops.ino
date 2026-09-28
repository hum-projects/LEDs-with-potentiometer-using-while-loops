int wLed = 13;
int yLed = 8;
int gLed = 7;
int potVal;
int potPin = A5;
int del = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(wLed,OUTPUT);
pinMode(yLed,OUTPUT);
pinMode(gLed,OUTPUT);
pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(wLed,LOW);
digitalWrite(yLed,LOW);
digitalWrite(gLed,LOW);
potVal = analogRead(potPin);
Serial.println(potVal);
delay(del);

while (potVal <= 500) {
  potVal = analogRead(potPin);
  digitalWrite(wLed,LOW);
  digitalWrite(yLed,LOW);
  digitalWrite(gLed,HIGH);
  Serial.println(potVal);
  delay(del);
}

while (potVal > 500 && potVal <= 800) {
  potVal = analogRead(potPin);
  digitalWrite(wLed,LOW);
  digitalWrite(yLed,HIGH);
  digitalWrite(gLed,LOW);
  Serial.println(potVal);
  delay(del);
}

while (potVal <= 1023 && potVal > 800) {
  potVal = analogRead(potPin);
  digitalWrite(wLed,HIGH);
  digitalWrite(yLed,LOW);
  digitalWrite(gLed,LOW);
  Serial.println(potVal);
  delay(del);
}

}