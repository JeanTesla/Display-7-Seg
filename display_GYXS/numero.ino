void numero(int num, int x){
  int pwm = x;
  
  for(int i=2;i<=9;i++){ //Desliga todas as portas do display
    digitalWrite(i,0);
  }
//  digito(500);
  
  switch (num){
     case 0: 
       analogWrite(4,pwm);
       analogWrite(5,pwm);
       analogWrite(6,pwm);
       analogWrite(7,pwm);
       analogWrite(8,pwm);
       analogWrite(9,pwm);
       break;
       
    case 1: 
       analogWrite(7,pwm);
       analogWrite(8,pwm);
       break;
    
    case 2: 
       analogWrite(9,pwm);
       analogWrite(8,pwm);
       analogWrite(3,pwm);
       analogWrite(5,pwm);
       analogWrite(6,pwm);
       break;
    
    case 3: 
       analogWrite(9,pwm);
       analogWrite(8,pwm);
       analogWrite(3,pwm);
       analogWrite(7,pwm);
       analogWrite(6,pwm);
       break;
    
    case 4: 
       analogWrite(4,pwm);
       analogWrite(3,pwm);
       analogWrite(8,pwm);
       analogWrite(7,pwm);
       break;
    
    case 5: 
       analogWrite(4,pwm);
       analogWrite(3,pwm);
       analogWrite(7,pwm);
       analogWrite(6,pwm);
       analogWrite(9,pwm);
       break;
    
    case 6: 
       analogWrite(3,pwm);
       analogWrite(4,pwm);
       analogWrite(5,pwm);
       analogWrite(6,pwm);
       analogWrite(7,pwm);
       analogWrite(9,pwm);
       break;
    
    case 7: 
       analogWrite(4,pwm);
       analogWrite(9,pwm);
       analogWrite(8,pwm);
       analogWrite(7,pwm);
       break;
    
    case 8: 
       analogWrite(3,pwm);
       analogWrite(4,pwm);
       analogWrite(5,pwm);
       analogWrite(6,pwm);
       analogWrite(7,pwm);
       analogWrite(8,pwm);
       analogWrite(9,pwm);
       break;
    
    case 9: 
       analogWrite(3,pwm);
       analogWrite(4,pwm);
       analogWrite(6,pwm);
       analogWrite(7,pwm);
       analogWrite(8,pwm);
       analogWrite(9,pwm);
       break;
}
}
