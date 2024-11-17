#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

float mediapeso(float n1,float n2, float n3){
float peso1 = 2,peso2 = 3,peso3 = 5,M;
return M = (n1 * peso1 + n2 * peso2 + n3 * peso3) / (peso1 + peso2 + peso3);
}

void linha(){
    printf("\n---------------------------\n");
}



void salario (){
float salarioB,salarioL;
char nome[30];
float desc,r;

printf("Digite seu nome:\n");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("Digite o seu salario bruto:\n");
scanf("%f", &salarioB);

printf("Digite a porcentagem do desconto do seu salario:\n");
scanf("%f", &desc);

r = salarioB * desc/100;
salarioL = salarioB - r;

printf("%s seu salario de %.2f vai ser %.2f\n", nome, salarioB, salarioL);
}

int main(){
    int op;
    do{
        linha();
        printf("Menu de opcoes:\n");
        printf("1.Media de notas com pesos:\n");
        printf("2.Salario liquido e bruto:\n");
        printf("0.Sair do programa:\n");
        linha();
        scanf("%d", &op);
        system("cls");
        

        switch(op){
            case 1:{
                float nota1,nota2,nota3;
                printf("Digite as 3 notas:\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);
                printf("Resultado: %.2f\n", mediapeso(nota1,nota2,nota3));
                system("pause");
                system("cls");
                break;
            }
            case 2:{
                salario();
                system("pause");
                system("cls");
                break;
            }
            case 0:{
                printf("Saindo do Programa...\n");
                Sleep(500);
                printf("Saida concluida\n");
                Sleep(1000);
                system("cls");
                break;
            }
            default:
            printf("OPCAO INVALIDA! TENTE NOVAMENTE.");
            break;
        }
    }while(op != 0);
    return 0;
}