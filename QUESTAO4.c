#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    printf("########PAR OU IMPAR?##########");
    printf("\n\n");
    printf("Informe o numero: \n");
    scanf("%d",&x);
    if(x%2==0){
        printf("EH PAR");
        
    }else{
        printf("EH IMPAR");
    }
    return 0;
}