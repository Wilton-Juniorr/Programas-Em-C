//Faça um programa em C para somar dois numeros inteiros e multiplicar o resultado por 3.
#include <stdio.h>

int main(){

    int n1,n2;

    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero\n");
    scanf("%d",&n2);

    printf("Resultado: (%d + %d)x3 = %d", n1,n2, (n1 + n2)*3);

    return 0;
}