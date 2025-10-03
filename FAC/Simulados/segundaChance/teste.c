/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int leNotaValida(char prod){
    int nota;
    printf ("Digite a nota do produto %c: \n",prod);
    scanf ("%d", &nota);
    while (nota < 1 || nota > 5){
         printf("\n Incorreta");
         printf ("\n Digite a nota do produto %c: \n",prod);
        scanf ("%d", &nota);
    }
    return nota;
    
}

int main()
{
    int consumidores, jaFiz=0, nota1, somaNotaProduto1=0, contNota1=0, nota2, menor=999, maior= -1, 
    contNota5Produto=0, contNota2=0, contNota5Produto2=0;
    float mediaNotaProduto1, percentual;
    
    printf ("Digite o número de consumidores: \n");
    scanf ("%d", &consumidores);
    
    while (jaFiz < consumidores){
        jaFiz++;
        nota1=leNotaValida('A');
        nota2=leNotaValida('B');
        somaNotaProduto1+=nota1;
        
        if (nota2 > maior){
                maior = nota2;
        }
        if (nota2 < menor){
                menor = nota2;
        }
        
        if (nota1 == 5 && nota2 == 5){
                contNota5Produto++;
            
        }
    }
    mediaNotaProduto1= somaNotaProduto1/consumidores;
    printf ("A média das avaliações o produto A é de: %.1f \n", mediaNotaProduto1);
    printf ("A maior nota do produto B é %d \n", maior);
    printf ("A menor nota do produto B é %d \n", menor);
    percentual = contNota5Produto*100.0/consumidores;
    printf ("O percentual de consumidores que atribuíram nota 5 a ambos os produtos é de: %.2f%%", percentual);
    return 0;
}