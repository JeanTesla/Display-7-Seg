/*
valorDisplay(valor numerico,pwm,frequencia,array de pinos)
*/
const int pwm = 150;
const int freq = 10;
const int pinos[] = {44,45,46,47,48};

void setup() {
  Serial.begin(9600);

}

void loop() {
  valorDisplay(map(analogRead(A0),0,1023,0,999),pwm,freq,pinos);
  

}
