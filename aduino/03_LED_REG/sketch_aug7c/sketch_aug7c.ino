void setup() {
  // put your setup code here, to run once:
  // PIN_2(PD2)
  DDRB = 0x01;

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB = 0x01;
  delay(100);
  PORTB = 0x00;
  delay(100);
} 
