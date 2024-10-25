#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    PROGRESSÃO ARITMÉTICA\n");
    printf("######################\n");
    printf("\n\n");
    int i, x;
    float r, p, s;
    printf("Qual a razão da progressão aritmética?\n");
    scanf("%f", &r);
    printf("Quantos termos da progressão aritmetica devo somar?\n");
    scanf("%d", &x);
    p=0;
    s=0;
    for (i=1; i<=x; i++){
        p=p + r;
        printf("%.2f\n", p);
        s=s+p;
    }
    printf("A soma dos números é: %.2f\n", s);  
return 0;

}