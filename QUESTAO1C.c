#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valorp;
    int totalp, qtdp;
    printf("########CONTROLE DE CONSORCIOS##########");
    printf("\n\n");
    printf("Informe a quantidade TOTAL de prestacoes: \n");
    scanf("%d",&totalp);
    printf("Informe a quantidade de prestacoes PAGAS: \n");
    scanf("%d",&qtdp);
    printf("Informe o valor de cada prestacao: \n");
    scanf ("%f",&valorp);
    printf("O cliente ja pagou R$%.2f  de um total de R$%.2f \n",valorp*qtdp, valorp*totalp);
    printf("Portanto ainda deve pagar R$%.2f ",(valorp*totalp)-(valorp*qtdp));
    return 0;
}