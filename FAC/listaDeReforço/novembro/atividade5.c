#include <stdio.h>
int potencia(int a, int b){
    //guardando a base
    int base = a;
while( base < b){
    //guardando na base a multiplicação da base*num inserido primeiro
    base *= a;  
                }
 //retorna o valor quando b é pot de a
return base == b;
                          }
//main
int main(){ 
    int num1, num2;
    //pegando dois valores
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    //verificando com a função se num2 é pot de num1
    if(potencia(num1, num2)){
        printf("e potencia");
    }else{
        printf("nao e :( ");
    }
    return 0;
          }
