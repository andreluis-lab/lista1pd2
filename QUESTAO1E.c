#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("#######DOBRO DO NUMERO!!##########");
    printf("\n\n");
    printf("Informe O NUMERO: \n");
    scanf("%d",&x);
    printf("O DOBRO DO NUMERO!: %d", x*2);
    return 0;
}