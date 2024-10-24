//Faça um programa em C para calcular a média aritmética de três números inteiros.
#include <stdio.h>
#include <locale.h> //Biblioteca para selecionar uma lingua
int main(){
    setlocale(LC_ALL, "Portuguese"); //isso fara com que os acento e ç 
int n1,n2,n3,M;

    printf("Digite o primeiro número inteiro:\n");
    scanf("%d", &n1);

    printf("Digite o Segundo número inteiro:\n");
    scanf("%d", &n2);

    printf("Digite o Terceiro número inteiro:\n");
    scanf("%d", &n3);

    M = (n1 + n2 + n3)/3;

    printf("A média Aritmética é");
    printf("Resultado: %d", M);

    return 0;
}