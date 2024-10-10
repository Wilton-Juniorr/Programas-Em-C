/* Faça um programa em C para determinar o valor em graus Fahrenheit, de uma dada temperatura expressa em graus Celsius
    Fórmula/Processo: Fahrenheit = (C*9/5)+32
    */

#include <stdio.h>


int main(){

    float C, Fah;

    printf("Digite um valor para Celsius:\n");
    scanf("%f", &C);

    Fah = (C * 9 / 5) + 32;

    printf("O graus celsius %.0f em fahrenheit fica %.1f", C, Fah);

    return 0;
}