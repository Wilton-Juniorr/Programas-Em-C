/*  SISTEMA DE CALCULO DE UMA LOJA!
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>








float desconto (float valorproduto,float desconto){
    return valorproduto - (valorproduto * desconto);
}

float imposto (float valorproduto, float vimposto){
return valorproduto + (valorproduto * vimposto);
}

float itens (float valorproduto,float quantproduto){
return valorproduto * quantproduto;
}

float potencia (float vimposto, float desconto){
return pow (vimposto,desconto);
}

float valormaior (float vimposto, float desconto){
if(vimposto > desconto){
 return vimposto;
} else {
    return desconto;
}
}

int data (int D1, int M1, int A1){
  int  D = 7, M = 11, A = 24;
if(D != D1){
    return "false";
} else {
    return "true";
}
if(M != M1){
    return "false";
} else {
    return "true";
}
if(A != A1){
    return "false";
} else {
    return "true";
}
}

void bemvindo (){
    printf("Seja Bem Vindo ao Programa.\n");
}

void desconto1 (float valorproduto,float desconto){
    float resultado = valorproduto - (valorproduto * desconto);
    printf("Resultado: %.2f", resultado);
}

void imposto1 (float valorproduto, float vimposto){
    float resultado = valorproduto + (valorproduto * vimposto);
    printf("Resultado: %.2f", resultado);
}

void itens1 (float valorproduto,float quantproduto){
    float resultado = valorproduto * quantproduto;
    printf("Resultado: %.2f", resultado);
}

void potencia1 (float vimposto, float desconto){
 float resultado = pow (vimposto,desconto);
 printf("Resultado: %.2f", resultado);
}

void valormaior1 (float vimposto, float desconto){
if(vimposto > desconto){
    return vimposto;
} else {
    return desconto;
}

}

int main(){
    float num1,num2,imp,qpro;
    printf("Digite o valor do produto:\n");
    scanf("%f", &num1);
    printf("Digite o valor do desconto:\n");
    scanf("%f", &num2);
    float D = desconto(num1,num2);
    printf("O valor do Produto com desconto: %.2f\n", D);

    printf("Digite o valor do imposto:\n");
    scanf("%f", &imp);
    float i = imposto(D,imp);
    printf("O valor do produto com desconto e com imposto: %.2f\n", i);

    printf("Digite a quantidade de produtos:\n");
    scanf("%f", &qpro);
    float in = itens(i,qpro);
    printf("O valor da quantidade de todos os produtos: %.2f\n",in);

    

    return 0;
}