#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x;
    printf("########CONVERSOR METROS -> CENTIMETROS##########");
    printf("\n\n");
    printf("Informe o valor em metros: \n");
    scanf("%f",&x);
    x=x*100;
    printf("O valor informado equivale a %.f cm",x);
    return 0;
}