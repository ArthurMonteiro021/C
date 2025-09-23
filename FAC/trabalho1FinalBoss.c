#include <stdio.h>
int main(){
int n1, n2, cen, dez, meio, maior, medio, menor, cen2, dez2, meio2, maior2, medio2, menor2;
    printf("Insira dois valores positivos entre 1 e 999: \n");
    scanf("%i %i", &n1, &n2);
    
    //verificacao de numero 
    if((n1<1 || n1>999) || (n2<1 || n2>999)){
    printf("\nNumero invalido");
    }else{
        if(n1<10){
        printf("unico numero %i", n1);
        }else if((n1 >= 10) || (n1<=999)){
        
        //pega o ultimo numero
        cen= n1%10;
        printf("\nultimo %i", cen);
        
        //pega o primeiro numero
        dez = n1/100;
        printf("\nprimeiro %i", dez);
        
        //pega o do meio
        meio = (n1/10)%10;
        printf("\nmeio %i", meio);
        
        }else{
        printf("algo deu muito errado, tente novamente");
        }
        
         if((dez > cen) && (dez>meio)){
        
                if(cen>meio){
                maior=dez;
                menor=meio;
                medio=cen;
                printf("\n%i %i %i", maior, medio, menor);
                }else{
                
                printf("\n%i %i %i", maior, menor, medio);
                }
        
        }else{
        
        if((cen>dez) && (cen>meio)){
        
         if(dez>meio){
                maior=cen;
                menor=meio;
                medio=dez;
                printf("\n%i %i %i", maior, medio, menor);
                }else{
                
                printf("\n%i %i %i", maior, menor, medio);
                }
        
        }else{
                maior=meio;
                menor=dez;
                medio=cen;
                printf("\n%i %i %i", maior, medio, menor);
        }
        
        }
        //parte do n2
          if(n2<10){
        printf("unico numero %i", n2);
        }else if((n2 >= 10) || (n2<=999)){
        
        //pega o ultimo numero
        cen2= n2%10;
        printf("\nultimo %i", cen2);
        
        //pega o primeiro numero
        dez2 = n2/100;
        printf("\nprimeiro %i", dez2);
        
        //pega o do meio
        meio2 = (n2/10)%10;
        printf("\nmeio %i", meio2);
        
        }else{
        printf("algo deu muito errado, tente novamente");
        }
        
         if((dez2 > cen2) && (dez2>meio2)){
        
                if(cen2>meio2){
                maior2=dez2;
                menor2=meio2;
                medio2=cen2;
                printf("\n%i %i %i", maior2, medio2, menor2);
                }else{
                
                printf("\n%i %i %i", maior2, menor2, medio2);
                }
        
        }else{
        
        if((cen2>dez2) && (cen2>meio2)){
        
         if(dez2>meio2){
                maior2=cen2;
                menor2=meio2;
                medio2=dez2;
                printf("\n%i %i %i", maior2, medio2, menor2);
                }else{
                
                printf("\n%i %i %i", maior2, menor2, medio2);
                }
        
        }else{
                maior2=meio2;
                menor2=dez2;
                medio2=cen2;
                printf("\n%i %i %i", maior2, medio2, menor2);
        }
        
        
        
        
        
        
    
    }
    return 0;
}
}