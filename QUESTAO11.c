#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("##########CALCULO DE DESCONTO############");
    printf("\n\n");
    int n;
    float v= 12.50;
    printf("Digite o número de camisas copradas pelo cliente:");
    printf("\n\n");
    scanf("%d", &n);
    
    if(n<=5){
        printf("O total é: %.2f e com desconto ficará de: %.2f",n*v, (n*v) - n*v*0.03);
    }
    else if(n>5 && n<=10){
        printf("O total é: %.2f e com desconto ficará de: %.2f",n*v, (n*v) - n*v*0.05);
    }else if(n>10){
       printf("O total é: %.2f e com desconto ficará de: %.2f",n*v, (n*v) - n*v*0.07);
    }


return 0;

}