#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    float U, R, i;
    printf("********************************************\n");
    printf("      CÁLCULO DE GRANDEZAS ELÉTRICAS\n");
    printf("********************************************\n");
    printf("1. Tensão (em Volt)\n");
    printf("2. Resistência (em Ohm)\n");
    printf("3. Corrente (em Ampere)\n");
    printf("********************************************\n");
    printf("Qual grandeza deseja calcular?");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("Digite o valor da Resistência: \n");
            scanf("%f", &R);
            printf("Digite o valor da Corrente: \n");
            scanf("%f", &i);
            U=R*i;
            printf("A Tensão é de %.2f V", U);
            break;
        case 2:
             printf("Digite o valor da Tensão: \n");
            scanf("%f", &U);
            printf("Digite o valor da Corrente: \n");
            scanf("%f", &i);
            R=U/i;
            printf("A Resistência é de %.2f Ω", R);
            break;
        case 3:
             printf("Digite o valor da Tensão: \n");
            scanf("%f", &U);
            printf("Digite o valor da Resistência: \n");
            scanf("%f", R);
            i=U/R;
            printf("A Resistência é de %.2f Ω",i);
            break;
    }

return 0;

}