/* Faça um programa em C que calcule o salário líquido de um funcionário, considerando que sobre o seu salário bruto, incide um desconto de 10% para previdência. O programa deve mostrar o nome do funcionario, o seu salário bruto e o seu salario líquido
*/
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float SalarioL, SalarioB,Desc;

    printf("Digite o seu nome\n");
   fgets (nome, sizeof(nome), stdin);

    printf("Digite o seu salario bruto:\n");
    scanf("%f", &SalarioB);

    Desc = SalarioB*0.10;
    SalarioL = SalarioB - Desc;

    printf("O nome do funcionario é %s ", nome);
    printf("O salario liquido %.2f \n", SalarioL);
    printf("O Salario bruto %.2f ", SalarioB);

    return 0;
}