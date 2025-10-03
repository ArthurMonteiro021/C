#include <stdio.h>
int nota(char prod){
    int avl;
    printf("Insira a avaliação do produto %c: \n",prod);
    scanf("%d", &avl);
    while(avl < 0 || avl > 5){
        printf("Insira uma nota valida para o produto %c: \n",prod);
        scanf("%d", &avl);
    }
    return avl;
}

// -------------------------------------------------------------------
int main(void){
    int consumidor, cont=0, maiorNotaB = -1, somaNotaA=0, notaA=0, notaB=0, cont5 = 0;
    float mediaA;

    printf("Insira a quantidade de avaliadores: \n");
    scanf("%d", &consumidor);
    printf("\nA avalilacao deve ser de 0 - 5\n");

        while(cont < consumidor){
           notaA = nota('A');
           notaB = nota('B');
           somaNotaA += notaA; 

                if(notaB > maiorNotaB){
                    maiorNotaB = notaB;
                }
                if(notaA == 5 && notaB == 5){
                     cont5++;
                }
                cont++;
        }

            mediaA = somaNotaA / consumidor;
            float percentual = (cont5 * 100.0) / consumidor;

    printf("A media do produto A e: %.1f\n", mediaA);
    printf("A maior nota do produto B e: %d\n", maiorNotaB);
    printf("O percentual de pessoas que deram nota 5 para ambos os produtos e: %.2f%%\n", percentual);
    return 0;
}