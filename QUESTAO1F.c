#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char cid[50], pais[50];
    printf("#######BOAS VINDAS PERSONALIZADA#######");
    printf("\n\n");
    printf("Informe o nome do seu pais:  \n");
    scanf("%s",&cid);
    printf("Informe o nome da sua cidade:  \n");
    scanf("%s",&pais);
    printf("%s , %s bem vindo(a)", cid, pais);
    return 0;
}