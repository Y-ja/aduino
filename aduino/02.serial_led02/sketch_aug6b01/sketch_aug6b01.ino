const int LED = 13;
//Ctrl + spa. 
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // digitalWrite(LED , HIGH);
  // digitalWrite(LED , LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED , LOW);
  delay(1);
  digitalWrite(LED , HIGH);
  delay(9);
  // delayMicroseconds(990); // --> 0.1초 
  // delayMicroseconds(10);
}
