#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("####################################\n");
    printf("    IDADES (MENOR QUE 21 MAIOR QUE 50)\n");
    printf("####################################\n");
    printf("\n\n");
    int  idade, i, j;
    i=0; j=0;
    idade=1;
    while (idade != (-99)) { 
        printf("Qual sua idade?\n");
        scanf("%d", &idade);
        if(idade==(-99)){
            break;
        }else if(idade<21){
            i++;
        }else if(idade>50){
            j++;
        }
    }
    printf("%d pessoas com menos de 21 anos e %d pessoas acima de 50 anos",i, j);
return 0;

}