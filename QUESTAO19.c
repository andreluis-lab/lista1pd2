#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    NUMERO 1 A 4\n");
    printf("######################\n");
    printf("\n\n");
    int  x;
    printf("Digite um número de 1 a 4\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("O número digitado foi %d\n", x);
            break;
        default:
            printf("Entrada inválida.\n");
            break;
    }
return 0;

}