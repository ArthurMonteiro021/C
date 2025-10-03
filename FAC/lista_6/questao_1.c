#include <stdio.h>
int main(void){
    int alunos, alunCont = 0,  matricula = -1, acima = 0, menor = 0, somaTurma=0;
    float notaProva, mediaTrab, mediaAluno, mediaTurma=0;
    printf("Informe a quantidade de aluno que tem na turma: \n");
    scanf("%d",&alunos);

    while(matricula != 0 ){
        alunCont ++;
        printf("Insira a matricula do aluno %d: \n", alunCont);
        scanf("%d",&matricula);

        if(matricula == 0){
            break;
        }else{
        printf("Insira a nota da prova do aluno %d: \n", alunCont);
        scanf("%f",&notaProva);
        printf("Insira a media dos trabalhos do aluno %d: \n",alunCont);
        scanf("%f",&mediaTrab);

            if(notaProva > 7){
                acima++;
            }
            
            if(notaProva < 3){
                menor++;
            }

            mediaAluno = 0.85*notaProva+ 0.15*mediaTrab;
            somaTurma++;
            mediaTurma = (mediaTurma + mediaAluno)/somaTurma;

        }
    }//fim while

    printf("A turma tem %d com nota ACIMA de 7.\n",acima);
    printf("A turma tem %d com nota ABAIXO de 3.\n",menor);
    return 0;}
