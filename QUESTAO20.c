#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    NÚMERO SORTEADO 0 a 500\n");
    printf("######################\n");
    printf("\n\n");
    int  x = 222, y ,i = 1;
    printf("Um número x foi sorteado de 0 a 500. Advinhe-o ou ficará preso infinitamente no limbo\n");
        scanf("%d", &y);
    while (y != x) {
        if (y >x){
            printf("O número digitado é maior que x.");
        }else if (y <x){
            printf("O número digitado é menor que x.");
        }
        printf("Tente novamente:\n");
        scanf("%d", &y);
        i++;
    }
    switch(i){
        case 1:
        case 2:
        case 3:
            printf("%d tentativas... muito sortudo!", i);
            break;
        case 4:
        case 5:
        case 6:
            printf("%d tentativas...  sortudo!", i);
            break;
        case 7:
        case 8:
        case 9:
        printf("%d tentativas...  normal!", i);
            break;
        default:
            printf("tente novamente");
            break;
    }
return 0;

}