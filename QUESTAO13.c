#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("######################\n");
    printf("    CÁLCULO DO IMC\n");
    printf("######################\n");
    printf("\n\n");
    float peso, h, IMC;
    printf("Digite o peso da pessoa (KG)\n");
    scanf("%f",&peso);
    printf("Digite a altura da pessoa (m): \n");
    scanf("%f",&h);
    h=h*h;
    IMC = peso/h;
    if(IMC<18.5){
        printf("Abaixo do peso");
    }else if(IMC>=18.5 && IMC<25){
        printf("Peso normal");
    }else if(IMC>=25 && IMC<30){
       printf("Sobrepeso");
    }else if(IMC>=30 && IMC<35){
       printf("Obesidade grau 1");
    }else if(IMC>=35 && IMC<40){
       printf("Obesidade grau 2");
    }else if(IMC>=40){
       printf("Obesidade grau 3");
    }

return 0;

}