/*Faça um switch case com os seguintes exercicios.
1. Verificação de Par ou Ímpar
Escreva um programa que receba um número inteiro do usuário e use a estrutura if-else para verificar se o número é par ou ímpar. O programa deve exibir o resultado correspondente.

2. Calculadora Simples com switch
Crie um programa que simule uma calculadora simples. O usuário deve inserir dois números e uma operação (adição, subtração, multiplicação ou divisão). Use o switch para realizar a operação correta e exibir o resultado.

3. Verificar Maior de Três Números
Escreva um programa que receba três números inteiros e use if-else para determinar e exibir qual deles é o maior.

4. Imprimir Números de 1 a 100 (Com for)
Crie um programa que imprima todos os números de 1 a 100 usando a estrutura for.

5. Soma de Números Pares (Com while)
Escreva um programa que calcule e exiba a soma de todos os números pares de 1 a 100. Use a estrutura while para realizar a soma.

6. Número Fatorial (Com do-while)
Escreva um programa que peça ao usuário um número inteiro positivo e calcule o fatorial desse número usando a estrutura do-while. O fatorial de um número n é a multiplicação de todos os números de 1 até 𝑛.

7. Menu de Opções (Com switch)
Crie um programa que exiba um menu com as seguintes opções:

Verificar se um número é positivo ou negativo.
Verificar se um número é par ou ímpar.
Sair do programa. O programa deve usar switch para escolher a opção e realizar a ação correspondente.

8. Cálculo de Média Aritmética
Escreva um programa que receba quatro notas de um aluno e calcule a média aritmética. O programa deve usar if-else para verificar se a média é maior ou igual a 7.0 e exibir se o aluno está aprovado ou reprovado.

9. Tabuada de um Número (Com for)
Escreva um programa que peça ao usuário um número inteiro e exiba a tabuada desse número de 1 a 10, usando a estrutura for.

10. Soma de Números até Zero (Com do-while)
Crie um programa que receba números inteiros do usuário e vá somando esses números. O programa deve parar de pedir números e exibir a soma total quando o usuário inserir o número 0. Use a estrutura do-while para realizar essa tarefa.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void linha(){
    printf("----------------------------------\n");
}

int main(){
    int opcao;

    linha();
    printf("\tMENU DE OPCOES\n");
    printf("\t1.Par ou Impar\n");
    printf("\t2.Calculadora\n");
    printf("\t3.Maior de TRES\n");
    printf("\t4.For(1 ate 100)\n");
    printf("\t5.Soma Numeros PARES\n");
    linha();
    scanf("%d", &opcao);
    system("cls");
    switch(opcao){
        case 1:{
            int num;
            printf("Digite um numero inteiro e veja se e PAR ou IMPAR:\n");
            scanf("%d", &num);
            if (num % 2 == 0){

                printf("O numero %d e PAR!", num);
            } else {
                printf("O numero %d e IMPAR!", num);
            }
            break;
        }
        case 2:{
           
            float n1,n2;
            int opcaoo;
            
            printf("Digite um numero:\n");
            scanf("%f", &n1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &n2);

            linha();
            printf("\tMenu de Opcoes\n");
            printf("\t1.Somar\n");
            printf("\t2.Subtracao\n");
            printf("\t3.Multiplicacao\n");
            printf("\t4.Divisao\n");
            linha();
            scanf("%d", &opcaoo);
            system("cls");
            switch(opcaoo){
                case 1:{
                printf("Resultado: %.1f + %.1f = %.1f", n1, n2, n1 + n2 );        
                break;
                }
                case 2:{
                    printf("Resultado: %.1f - %.1f = %.1f", n1, n2, n1 - n2);
                    break;
                }
                case 3:{
                    printf("Resultado: %.1f * %.1f = %.1f", n1, n2, n1 * n2);
                    break;
                }
                case 4:{
                    if(n2 != 0){
                        printf("Resultado: %.1f / %.1f = %.1f", n1,n2, n1/n2);
                    } else {
                        printf("ERROR! Divisor Nao pode ser ZERO.");
                    }
                    
                    break;
                }
            }
            break;
        }
        case 3:{
            int v1,v2,v3;
            printf("Digite tres numeros\n");
            scanf("%d", &v1);
            scanf("%d", &v2);
            scanf("%d", &v3);
            if(v1 > v2 && v1 > v3){
                printf("%d e maior que %d e %d", v1,v2,v3);
            } else if (v2 > v1 && v2 > v3) {
                printf("o segundo numero %d maior que %d e %d",v2,v1,v3);
            } else if (v3 > v1 && v3 > v2) {
                printf("O terceiro numero %d maior que %d e %d", v3,v1,v2);
            } else {
                printf("Todos os numeros sao iguais %d, %d, %d",v1,v2,v3);
            }
            break;
        }
        case 4:{
            int i;
            for(i=0;i<=100;i++){
                printf("%d\n", i);
            }
            break;
        }
        case 5:{
            int a = 0,S;
            printf("SOMA DE NUMEROS PAREDES DE 1 A 100\n");

            while(a <= 100){
                if(a % 2 == 0){
                    printf("%d\n",a);
                    S+=a;
                }
                a++;
            }
            printf("Resultado da SOMA: %d",S);
            break;
        }
        case 6:{
            
        }
        default:
        printf("OPCAO INVALIDA!");
    }

    return 0;
}