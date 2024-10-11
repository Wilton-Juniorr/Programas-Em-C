/*Escreva um algoritmo para ler o nome e a idade de uma 
pessoa, e exibir quantos dias de vida ela possui. 
Considere sempre anos completos, e que um ano possui 
365 dias. Ex: uma pessoa com 19 anos possui 6935 dias 
de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ 
VIVEU 6935 DIAS.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[30];
    int idade,Dias = 365;
    printf("Digite o seu nome e sobrenome:\n");
     fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
   
    printf("Digite a sua idade para ver ela em dias:\n");
    scanf("%d", &idade);

    Dias *= idade; //isso daqui e o equivalente a isso (dias = dias * idade) 

    printf("Ola %s, Voce ja viveu %d Dias", nome, Dias);
    return 0;
}