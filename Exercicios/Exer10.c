/* 
*/

#include <stdio.h>

int main(){

    int i,resultado = 0,N;

    for(i = 0; i < 5; i++) {
        printf("Digite um numero menor ou maior que zero:\n");
        scanf("%d", &N);
        if (!(N > 0)) {
            resultado = resultado + 1;
        }
    }
    printf("O resultado e -> %d", resultado);
    return 0;
}