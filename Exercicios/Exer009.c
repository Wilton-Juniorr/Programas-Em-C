/*
 Faça um algoritmo que leia o nome, o sexo e o estado civil de 
uma pessoa. Caso sexo seja “F” e estado civil seja “CASADA”, 
solicitar o tempo de casada (anos). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50];
    char sexo;
    char estadoCivil[20];
    int tempoCasada;

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite seu sexo (M/F):\n");
    scanf(" %c", &sexo); 
    
    printf("Digite seu estado civil:\n");
    scanf(" %[^\n]", estadoCivil); 
    if (sexo == 'F' && strcasecmp(estadoCivil, "CASADA") == 0) {
      
        printf("Digite o tempo de casada (em anos):\n");
        scanf("%d", &tempoCasada);
        printf("Nome: %s\nSexo: %c\nEstado Civil: %s\nTempo Casada: %d anos\n", nome, sexo, estadoCivil, tempoCasada);
    } else {
        printf("Nome: %s\nSexo: %c\nEstado Civil: %s\n", nome, sexo, estadoCivil);
    }

    return 0;
}