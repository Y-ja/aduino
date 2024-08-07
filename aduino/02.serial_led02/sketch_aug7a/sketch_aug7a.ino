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
  for (int t_high = 0; t_high <= 1001; t_high++) {
    digitalWrite(LED , HIGH);
    // delay(t_high);
    delayMicroseconds(t_high);
    digitalWrite(LED , LOW);
    // delay(10 - t_high);
    delayMicroseconds(1000 - t_high);
    
  }
}