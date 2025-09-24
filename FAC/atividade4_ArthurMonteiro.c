#include <stdio.h>
float qntdLitros (float ml, float peso){
    float litroAgua;
    ml = 35;
    litroAgua = ml * peso/1000;
    return litroAgua;
}

int main() {
    int qntdAluno, jaFiz = 0, contLitros=0, cont3Litros = 0;
    float litroAgua, maiorQtd, ml, peso, qntdAgua, litros, percentual2Litros, somaLitros = 0, mediaLitros = 0, somaPeso = 0, mediaPeso = 0;
    printf ("Digite a quantidade de alunos: \n");
    scanf ("%d", &qntdAluno);
    
    
maiorQtd = -1;
    while (jaFiz < qntdAluno){
        jaFiz++;
        printf ("Digite o peso do aluno %d:\n", jaFiz);
        scanf ("%f", &peso);
        qntdAgua = qntdLitros (ml, peso);
        printf ("Você precisa beber %f de litros por dia\n",qntdAgua);


        if(qntdAgua > maiorQtd){
        maiorQtd = qntdAgua;
    }


        
        if (qntdAgua < 2){
            contLitros++;
        }
        else { 
             if (qntdAgua > 3){
               cont3Litros ++;
                somaPeso += peso;
            }
        }
        somaLitros += qntdAgua;
       
    }
    printf ("%d alunos bebem menos de 2 litros \n", contLitros);
    if (contLitros > 0){
        percentual2Litros = contLitros *100/qntdAluno;
        



        printf ("O percentual de alunos que bebe menos de 2 litros é de %.1f%%\n", percentual2Litros);
    }
    printf ("A turma bebeu %.1f litro(s)\n", somaLitros);
    mediaLitros = somaLitros/qntdAluno;
    printf ("A turma tem uma média de %.1f litro(s) bebidos\n", mediaLitros);
    if (cont3Litros >= 1){
        mediaPeso = (float)somaPeso/cont3Litros;
        printf ("A media de peso dos alunos que bebem mais de 3 litros é de %.1f kg",mediaPeso);
    }
    printf("\n\nA maior quantidade bebida por um aluno foi de: %.2f \n\n",maiorQtd);
  

    return 0;
}