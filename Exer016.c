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

