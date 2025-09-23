#include <stdio.h>
//atribuindo nome as funções
int soma(int n1, int n2){
   return n1 + n2;  
}
int sub(int n1, int n2){
    return n1 - n2; 
}
int mult(int n1, int n2){
    return n1 * n2;
}
int div(int n1, int n2){
    return n1 / n2;
}
//inicio da MAIN
int main(){
    int n1, n2, r = 0;
    char op;
    //pegando os dois valores
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    //escolhendo a operação que será feita
    printf("Esolha uma operacao para ser feita com '/','*','+' ou '-' :");
    scanf(" %c", &op);

    switch(op){
        case '/':
       r = div(n1, n2);
        break;

        case '*':
       r =   mult(n1, n2);
        break;

        case '-':
        r =  sub(n1, n2);
        break;

        case '+':
       r =   soma(n1,n2);
        break;

        default:
        printf("A operacao escolhida nao exite, tente novamente!");
        return 1;
    }
         printf("O resultado de acordo com a operacao escolhida e de: %d ", r);

    return 0;
}//fim main;