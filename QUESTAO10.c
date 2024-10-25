#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("##########CALCULO DE BONUS SALARIAL############");
    printf("\n\n");
    int h;
    float valor, bhx;
    printf("Digite o número de horas trabalhadas pelo funcionário.");
    printf("\n\n");
    scanf("%d", &h);
    printf("Digite o valor da hora trabalhada.");
    printf("\n\n");
    scanf("%f", &valor);
    
    if(h<=40){
        printf("O salário semanal desse trabalhador será: %.2f", valor*h);
    }
    else if(h>40 && h<=60){
        bhx = (h-40)*valor*0.5 + (h-40)*valor;
        printf("O salário semanal desse trabalhador será: %.2f", valor*40 + bhx);
    }else if(h>60){
        bhx = (h-40)*valor*2;
        printf("O salário semanal desse trabalhador será: %.2f", valor*40 + bhx);

    }


return 0;

}