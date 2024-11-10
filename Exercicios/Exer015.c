#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float opmate (float a, float b){
return (a + b) + (a - b) + (a * b) + (a / b);
}

int verivalor(int n){
    if(n > 0){
        return 1;
    } else if(n < 0){
        return -1;
    } else {
        return 0;
    }
}

void convertemp (int segtotais){

int horas = segtotais / 3600;
int min = (segtotais % 3600)/60;
int seg = segtotais % 60;

printf("Horas %d, Minutos %d e segundos %d totais.\n", horas, min, seg);
}

void CalcularMED (){
    float n1,n2,n3;
    printf("Digite as 3 notas:\n");
    scanf("%f %f %f", &n1,&n2, &n3);

    float maior = n1, menor = n1;

    if(n2 > maior){
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }
    if(n2 < menor){
        menor = n2;
    }
    if(n3 < menor){
        menor = n3;
    }

    float somanotas = n1+n2+n3;
    float mediatres = somanotas/3;

    float menornota = somanotas - menor;
    float mediaduasnota = menornota/2;

    printf("Media das 3 notas %.2f\n", mediatres);
    printf("Media das duas maiores notas %.2f\n", mediaduasnota);
    printf("Maior nota: %.1f\n", maior);
    printf("Menor nota: %.1f\n", menor);
    printf("Soma das 3 notas: %.1f\n", somanotas);
}

int main(){
    int op;

do{
printf("Menu de opcoes:\n");
printf("1.Operacoes matematicas:\n");
printf("2.Verificar Valor:\n");
printf("3.Converter Tempo:\n");
printf("4.Calcular Media:\n");
printf("0.Sair do programa\n");
scanf("%d", &op);

switch(op){
    case 1:{
        float num1,num2;
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1,&num2);
        if(num2 != 0){
            float resultado = opmate(num1,num2);
            printf("Resultado da soma %.2f\n", resultado);
        } else {
            printf("Divizor nao pode ser zero. tente novamente.\n");
        }
        system("pause");
        system("cls");
        break;
    }
    case 2:{
        int V;
        printf("Digite um numero e veja o que ele retorna:\n");
        printf("Digite o numero...\n");
        scanf("%d", &V);
        int r = verivalor(V);
        printf("Resultado: %d\n", r);
        system("pause");
        system("cls");
        break;
    }
    case 3:{
        int nn;
        printf("Digite numeros inteiros e veja quantas horas, minutos e segundos sao.\n");
        printf("Digite os numeros:\n");
        scanf("%d", &nn);
        convertemp(nn);
        system("pause");
        system("cls");
        break;
    }
    case 4:{
        CalcularMED();
        system("pause");
        system("cls");
        break;
    }
    case 0:{
        printf("Saindo o programa...\n");
        Sleep(500);
        break;
    }

    default:
    printf("OPCAO INVALIDA, TENTE NOVAMENTE.\n");
        }
    }while(op != 0);
}