#include <stdio.h>

int main(void) {
    int idade;
    printf("Insira sua idade: ");
    scanf("%d",&idade);
    if(idade >= 18){
        printf("Voce e maior de idade\n");}else{
            printf("Voce e menor de idade\n");
        }
    
    return 0;}