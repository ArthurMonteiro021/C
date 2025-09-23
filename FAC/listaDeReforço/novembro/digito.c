#include <stdio.h>
int main(){
    int num, resto;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    while(num > 0 ){
        resto = num%10;
        printf("%d \n", resto );
        num /=10;
    }
}