/*Escreva um código em linguegem C, que leia dois valores informados pelo usuário. Permita que atraves de procedimentos, esses valores informados sejam somados e subitraidos exibindo os resultados produzidos. Também possa dividir e multiplicar retornando esses valores, atraves de uma função*/

#include <stdio.h>

void Soma(int n1, int n2){
    int soma;
    soma = n1 + n2;
    printf("%d + %d = %d", n1, n2, soma);
}

void Subtracao(int a, int b){
    int Sub;
    Sub = a - b;
    printf("%d - %d = %d", a, b, Sub);
}

float multiplicacao (float c, float d){
    return c * d;
}

float divisao(float e, float f){
    if (f == 0){
        printf("ERRO: Nenhum numero pode ser dividido por zero.\n");    
    }
    return e / f;
}

int main(){
    int x,y,opcao;
    printf("Digite um numero\n");
    scanf("%d", &x);
    printf("Digite o segundo numero\n");
    scanf("%d", &y);
    
    printf("MENU DE OPCOES\n");
    printf("1.Soma\n");
    printf("2.Subtracao\n");
    printf("3.Multiplicacao\n");
    printf("4.Divisao\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:{
            Soma(x,y);
            break;
        }
        case 2:{
            Subtracao(x,y);
            break;
        }
        case 3:{
            float resultM = multiplicacao(x,y);
            printf("Resultado: %d * %d = %.2f ", x, y, resultM);
            break;
        }
        case 4:{
        float resultD = divisao(x,y);
        if (y != 0){
            printf("Resultado: %d / %d = %.2f\n", x, y, resultD);
            
        }
        break;
        }
        default:
        printf("OPCAO INVALIDO!");
    }
    return 0;
}