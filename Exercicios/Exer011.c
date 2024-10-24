/* Par ou Impar
*/

#include <stdio.h>

int main(){

    int N;

    printf("Digite um numero inteiro e veja se ele e PAR ou IMPAR:\n");
    scanf("%d", &N);
    if (N % 2 == 0) {
        printf("O numero que voce digitou %d e PAR", N);
    } else {
        printf("O numero que voce digitou %d e IMPAR", N);
    }

    return 0;
}