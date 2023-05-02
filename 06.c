/*
6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5.


Objetivo: somar todos numeros multiplos de 3 ou 5

Saida : total da soma
 */

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>

int main()
{

    int i = 0, soma = 0;

    printf("----------------------------------------------------------\n");
    printf("                    Soma de numeros\n");
    printf("----------------------------------------------------------\n");

    printf("A soma dos numeros multiplos de 3 ou 5 ate 1000 = ");

    for (i = 0; i <= 1000; i++){
        if ((i % 3 == 0) && (i % 5 == 0)){
            soma += i;
        }else if (i % 3 == 0) {
                soma += i;
            }
    }

        for (i = 0; i <= 1000; i++){
            if ((i % 3 == 0) && (i % 5 == 0)){
            }else if (i % 5 == 0) {
                    soma+= i;
                }
    }

    printf("%d\n", soma);

    printf("----------------------------------------------------------\n");

    return 0;
}