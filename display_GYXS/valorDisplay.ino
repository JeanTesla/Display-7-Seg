void valorDisplay(int valor,int pwm,int freq,int pinos[]){
      int sizeVetor = NULL;
      
      if((valor>=0) && (valor<9)){
        sizeVetor = 1;
      }else if((valor>=10) && (valor<100)){
        sizeVetor = 2;
      }else if((valor>=100) && (valor<1000)){
        sizeVetor = 3;;
      }else if((valor>=1000) && (valor<10000)){
        sizeVetor = 4;
      }else if((valor>=10000) && (valor<100000)){
        sizeVetor = 5;
      }
      char inteiros[sizeVetor];
      sprintf(inteiros,"%d",valor);

       int vetorpinos[sizeof(inteiros)];
       int j = sizeof(inteiros);
       for(int i=0;i<sizeof(inteiros);i++){
          vetorpinos[i] = pinos[j-1];
          j--;
       }
       
      for(int i=0;i<sizeof(inteiros);i++){
        int num = inteiros[i] - '0';
        digito(num,pwm,freq,vetorpinos[i]);
      }    
 }
