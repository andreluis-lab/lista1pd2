#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float n1,n2,n3,m;
    int falta;
    printf("########APROVACAO ALUNO##########");
    printf("\n\n");
    printf("Nome do aluno: \n");
    scanf("%s",&nome);
    printf("Notas, respectvamente, primeira, segunda e terceira avaliacao: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    m=(n1+n2+n3)/3;
    printf("Forneca a quantidade de faltas do aluno");
    scanf("%d",&falta);
    if(m>=6 && falta<=8){
        printf("%s Você foi aprovado!! \n",nome);
        if(m==10){
            printf("PARABENS  VOCÊ FOI NOTA 10!");
        }
        
    }else 
        printf("O ALUNO %s REPROVADO",nome);
    return 0;
}