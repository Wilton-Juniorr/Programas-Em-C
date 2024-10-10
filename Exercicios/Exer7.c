/*Faça um programa em C que receba um valor inteiro qualquer e mostre o resto da divisão desse valor por 3.
*/

#include <stdio.h>

int main(){

    int n1,resto;

    printf("Digite um valor inteiro para mostrar o resto dele dividido por 3:\n");
    scanf("%d", &n1);

    resto = n1 % 3;

    printf("O resto de %d e %d", n1, resto);
    return 0;
}