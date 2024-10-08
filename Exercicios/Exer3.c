/* O sistema de avaliação determinada disciplina é composto por três provas.A primeira prova tem peso 2,
a segunda tem peso 3 e a terceira tem peso 5. Faça um programa em C para calcular a média final de um aluno nesta disciplina.
*/
#include <stdio.h>
#include <locale.h>
int main(){

setlocale(LC_ALL, "Portuguese");

    int peso1 = 2,peso2 = 3,peso3 = 5;
    float n1,n2,n3,M;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);

    M = (n1 * peso1 + n2 * peso2 + n3 * peso3) / (peso1 + peso2 + peso3);

    printf("A media é esta abaixo\n");
    printf("Resultado: %.2f", M);

    return 0;
}