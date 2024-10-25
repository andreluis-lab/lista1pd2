#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int nasc, atual;
    printf("########IDADE DA PESSOA##########");
    printf("\n\n");
    printf("Informe o ano de nascimento: \n");
    scanf("%d",&nasc);
    printf("Informe o ano atual: \n");
    scanf("%d",&atual);
    atual=atual-nasc;
    printf("Voce tem %d anos de idade",atual);
    return 0;
}