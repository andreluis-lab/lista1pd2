#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x, y, z;
    printf("########MEDIA DE 3 NUMEROS##########");
    printf("\n\n");
    printf("Informe OS NUMEROS: \n");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    printf("a media entre eles eh %.2f\n",(x+y+z)/3);
    return 0;
}