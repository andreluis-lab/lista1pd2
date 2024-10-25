#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3,m;
    printf("########APROVACAO ALUNO 2##########");
    printf("\n\n");
    printf("Notas, respectvamente, primeira, segunda e terceira avaliacao: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    m=(n1+n2+n3)/3;
    printf("A média do aluno foi de %.2f portanto:\n", m);
    if(m<=4.9){
        printf("Aluno em recuperação. \n");
        printf("\n\n");
        printf("A nota necessária para o aluno passar é: %.2f ",(12-m));    
    }else if (m>=5 && m<=6.9){
        printf("Aluno em prova final");
        printf("\n\n");
        printf("A nota necessária para o aluno passar é: %.2f ",(10-m));
        printf("\n\n");
    }else{
        printf("Aluno aprovado");
        printf("\n\n");
        if(m==10){
            printf("Parabéns");
            printf("\n\n");
        }
    }
    return 0;
}