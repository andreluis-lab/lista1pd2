#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    NÚMERO SORTEADO\n");
    printf("######################\n");
    printf("\n\n");
    int  x = 22, y;
    printf("Um número x foi sorteado de 0 a 100. Advinhe-o ou ficará preso infinitamente no limbo\n");
        scanf("%d", &y);
    while (y != x) { 
        printf("Tente novamente:\n");
        scanf("%d", &y);
    }
    printf("Você escapou dessa vez...\n");
return 0;

}