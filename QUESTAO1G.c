#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, h, min, sec;
    printf("#######CONVERTENDO SEGUNDOS EM H:M:S#######");
    printf("\n\n");
    printf("Informe o tempo total em segundos: \n");
    scanf("%d",&x);
    h=x/3600;
    min=(x%3600)/60;
    sec=((x%3600)%60);
    printf("%d segundos equivale a \n%d horas, %d minutos, %d segundos ", x, h, min,sec);
    return 0;
}