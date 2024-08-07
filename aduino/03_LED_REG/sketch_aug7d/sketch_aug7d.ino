void setup() {
  // put your setup code here, to run once:
  // PIN_2(PD2)
  DDRB = 0x0C;
  DDRD = 0xD0;

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB |= 0x0C;  // 원하는 비트를 1로 변경 
  delay(100);
  PORTB &= ~0xC; // 원하는 비트를 0으로 변경 (~ --> 비트 반전)
  delay(100);

  PORTD |= 0xD0;  
  delay(100);
  PORTD &= ~0xD0;
  delay(100);
} 