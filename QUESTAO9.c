#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######## OPERAÇÃO +, -, *, /.##########");
    char op;
    float x,y;
    printf("\n\n");
    printf("Por gentileza, digite o simbolo que representa a operação desejada(seguindo o padrão acima.)\n");
    scanf("%c",&op);
    printf("Agora digite dois números pra realizar a operação:\n ");
    scanf("%f",&x);
    scanf("%f",&y);
    switch (op){
        case '+':
            printf("%.2f + %.2f = %.2f", x, y, x+y);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", x, y, x-y);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", x, y, x*y);
            break;         
        case '/':
            printf("%.2f / %.2f = %.2f", x, y, x/y);
            break;
    }
    return 0;
}