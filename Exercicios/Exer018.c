#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(double a,int b){
    return pow(a,b);
}

int fatorial(int a1){
int falt = 1;
for(int i = 1; i <= a1; i++){
falt *= i;
}
return falt;
}

void temperatura(){
float Cel,Fah;
int op1;

printf("Digite 1 para Celsius ou 2 para Fahrenheit:\n");
scanf("%d", &op1);

if(op1 == 1){
    printf("Digite o grau de Fahrenheit para ver em Celsius:\n");
    scanf("%f", &Fah);
    if(Fah == 0 || Fah == 1){
        printf("Nao pode ser ZERO nem UM!!\n");
    } else {
    Cel = (Fah - 32) * (9/5);
    printf("Fahrenheit %.2f fica em Celsius %.2f\n", Fah,Cel);
    }
} else if(op1 == 2){
    printf("Digite o Grau de Celsius para ver em Fharenheit:\n");
    scanf("%f", &Cel);
    if(Cel == 0 || Cel == 1){
        printf("Nao pode ser ZERO ou UM!!\n");
    } else {
    Fah = (Cel *(9/5)) +32;
    printf("Celsius %.2f fica em Fahrenheit %.2f\n", Cel,Fah);
    }
} else {
    printf("OPCAO INVALIDA!\n");
}

}

void Distancia(){
    float M,K;
    int op2;

    printf("Digite  1 para Milhas OU 2 para Kilometros:\n");
    scanf("%d", &op2);
   
    if(op2 == 1){
        printf("Digite os Kilometros para Milhas:\n");
        scanf("%f", &K);
        if(K == 0 || K == 1){
            printf("Nao pode ser ZERO ou UM!!TENTE NOVAMENTE.\n");
        } else {
        M = K * 0.621371;
        printf("Kilometros %.2f em Milhas %.3f\n", K,M);
        }
    } else if(op2 == 2){
        printf("Digite as Milhas para Kilometros:\n");
        scanf("%f", &M);
        if(M == 0 || M == 1){
            printf("Nao pode ser ZERO ou UM!!TENTE NOVAMENTE.\n");
        } else {
        K = M * 1.60934;
        printf("Milhas %.3f para Kilometros %.2f\n",M,K);
        }
    } else {
        printf("OPCAO INVALIDA!\n");
    }
}

int main(){
    double base;
    int num1,num2;
    int op;
do{
    printf("MENU DE OPCOES:\n");
    printf("1.Potencia.\n");
    printf("2.Fatorial.\n");
    printf("3.Temperatura.\n");
    printf("4.Distancia.\n");
    printf("5.Sair.\n");
    scanf("%d", &op);
    system("cls");

    switch(op){
        case 1:{
            printf("Digite dois numeros inteiros positivo para calcular potencia.\n");
            scanf("%lf %d", &base,&num2);
            if(base == 0 || base == 1){
                printf("Nao pode ser ZERO ou UM!!\n");
            } else if(num2 == 0 || num2 == 1){
                printf("Nao pode ser ZERO ou UM!!\n");
            } else {
                printf("Resultado da potencia: %.2lf potencia %d = %.2lf\n",base,num2, potencia(base,num2));
            }
            break;
        }
        case 2:{
            printf("Digite um numero inteiro positivo e veja o seu fatorial.\n");
            scanf("%d", &num1);
            if(num1 < 2){
                printf("Nao pode numero ZERO ou Menor que zero ou UM!!\n");
            } else {
                printf("Resultado fatorial: %d\n", fatorial(num1));
            }
            break;
        }
        case 3:{
            temperatura();
            break;
        }
        case 4:{
            Distancia();
            break;
        }
        case 5:{
                printf("Saindo do Programa...");
                break;
            }
        default:
            printf("OPCAO INVALIDA!!TENTE NOVAMENTE.\n");
            break;
    }
    }while(op != 5);
    return 0;
}