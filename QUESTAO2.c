#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    printf("########MEDIA DE 3 NUMEROS##########");
    printf("\n\n");
    printf("Informe OS NUMEROS: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y &&  x>z){
        printf("%d eh o maior valor entre eles\n",y);
        
    }else if(y>x && y>z){
        printf("%d eh o maior valor entre eles\n",y);
    }else if(z>x && z>y){
        printf("%d eh o maior valor entre eles\n",z);
    }
    printf("a media entre eles eh %d\n",(x+y+z)/3);
    return 0;
}