#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float l, km, r;
    printf("########CALCULO CONSUMO COMBUSTIVEL##########");
    printf("\n\n");
    printf("Informe a quantidade de combustivel em litros: \n");
    scanf("%f",&l);
    printf("Informe a quantidade de kilometros rodados: \n");
    scanf("%f",&km);
    r=km/l;
    printf("O veiculo esta fazendo %.2f kilometros por litro de gasolina",r);
    return 0;
}