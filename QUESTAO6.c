#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char p1[50], p2[50];
    printf("########COMPARANDO PALAVRAS##########");
    printf("\n\n");
    printf("Digite a primeira palavra a ser comparada: \n");
    scanf("%s",&p1);
     printf("Digite a segunda palavra a ser comparada: \n");
    scanf("%s",&p2);
    if(strcmp(p1, p2)==0){
        printf("As duas palavras sao iguais!!\n");
        
    }else 
        printf("As palavras são diferentes");
    return 0;
}