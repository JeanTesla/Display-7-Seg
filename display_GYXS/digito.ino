/////////////// Oscilador de dígito ///////////////////////

void digito(int num,int pwm,int freq,int pin){

     
  digitalWrite(pin,1);
  numero(num,pwm);
  delay(freq);
  digitalWrite(pin,0);
 
}
