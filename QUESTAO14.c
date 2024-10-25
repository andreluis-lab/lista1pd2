#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    SOMA DE POSITIVOS\n");
    printf("######################\n");
    printf("\n\n");
    int x, i;
    i=0;
    while(x>0){
        printf("Digite digite o número para ser somado \n");
        scanf("%d", &x);
        i=i+x;
    }
    printf("A soma dos números inteiros positivos digitados é: %d", i);  
return 0;

}