/*  Desenvolver um algoritmo que leia a altura de 15 pessoas. 
Este programa deverá calcular e mostrar : 
a. A menor altura do grupo; 
b. A maior altura do grupo;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float alt[15];
    float menoralt, maioralt;
    int i;
    
    for (i = 0; i < 15; i++){
        printf("Digite a altura da %d pessoa em metros:\n", i + 1);
        scanf("%f", &alt[i]);

    }
    menoralt = alt[0];
    maioralt = alt[0];

    for (i = 1; i < 15; i++){
    if (alt[i] < menoralt){
        menoralt = alt[i];
    }
    if (alt[i] > maioralt){
        maioralt = alt[i];
    }
    }

    printf("O menor altura e %.2f metros.\n", menoralt);
    printf("O maior altura e %.2f metros.\n", maioralt);

    return 0;
}