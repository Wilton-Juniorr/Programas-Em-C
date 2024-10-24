/*Faça um programa em C para determinar area de um triângulo.
Fórmula/Processamento: Área = base x altura/2
*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portugese_Brazil");

    float area, base, altura;

    printf("Digite a base:\n");
    scanf("%f", &base);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triângulo é %.2f ", area);

    return 0;
}