#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("####################################\n");
    printf("    ENTREVISTANDO ALUNOS\n");
    printf("####################################\n");
    printf("\n\n");
    int  idade, sexo, i, j;
    i=0; j=0;
    idade=1;
    while (idade>0) { 
        printf("Qual sua idade?\n");
        scanf("%d", &idade);
        if(idade<0){
            break;
        }
        printf("Digite 1 para sexo masculino e 2 para sexo feminino:\n");
        scanf("%d", &sexo);
        if(idade>=18 && sexo==1){
            i++;
        }
        if(sexo==2){
            j++;
        }
    }
    printf("Nessa turma há %d homens acima de 18 anos e %d mulheres.",i, j);
return 0;

}