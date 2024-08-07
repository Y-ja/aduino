const int LED[5]  = {2,4,3,6,5};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i<6; i++) {
    pinMode(LED[i], OUTPUT);
  }
 // pinMode(led_0, OUTPUT);
 // pinMode(led_1, OUTPUT);
 // pinMode(led_2, OUTPUT);
 // pinMode(led_3, OUTPUT);
 // pinMode(led_4, OUTPUT);
  
  /*digitalWrite(led_0 , HIGH);
  digitalWrite(led_1 , HIGH);
  digitalWrite(led_2 , HIGH);
  digitalWrite(led_3 , HIGH);
  digitalWrite(led_4 , HIGH);*/
}

void loop() {
  // put your main code here, to run repeatedly:
    for (int i = 0; i<6; i++) {
      digitalWrite(LED[i] , HIGH);
      delay(100);
      digitalWrite(LED[i] , LOW);
      delay(100);
  }
  
    /*for (int i = 0; i<6; i++) {
      digitalWrite(LED[i] , LOW);
      delay(100);
  }*/
 
}
