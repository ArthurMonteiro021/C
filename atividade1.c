#include <stdio.h>
int main()
{
    int n1, n2, dez, cen;
        printf("Insira dois valores entre 1 e 999: ");
        scanf("%d %d", &n1, &n2);
    if((n1 < 1 || n1 > 999) || (n2 < 1 || n2 > 999)){
        printf("Numero invalido");
    }else{
        if(n1>=100 ){
              // pega o ultimo 
            cen = n1 % 10;
            printf("%i",cen);
           
            dez = n1/10;
            printf("\n%i",dez);
            
        }else if((n1>=10 && n1<=99) ) {
           // pega o primeiro número
            dez = n1/10;
            printf("%i",dez);

            } else{
            // unidade
            printf("ue");
        }
    }
    return 0;
}

