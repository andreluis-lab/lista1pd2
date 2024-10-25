#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("########TABUADA##########");
    printf("\n\n");
    printf("Informe O NUMERO: \n\n\n");
    scanf("%d",&x);
    printf("\n\n");
    printf("Segue a tabuada\n\n");
    for (int i = 1; i<=10; i++){
        printf("%d * %d = %d\n", x, i, x*i);

    }
    return 0;
}
