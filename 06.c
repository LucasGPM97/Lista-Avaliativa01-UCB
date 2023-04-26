/* 
6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 
que são múltiplos de 3 ou 5.


Objetivo: somar todos numeros multiplos de 3 ou 5

Saida : total da soma

 */

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>

int main(){

    int i=0, soma=0, multiplo3=0, multiplo5=0;

    printf("----------------------------------------------------------\n");
    printf("                    Soma de numeros\n");
    printf("----------------------------------------------------------\n");

    printf("A soma dos numeros multiplos de 3 ou 5 ate 1000 = ");

    for(i=0;i<=1000;i++){
        multiplo3 = i*3;
        multiplo5 = i*5;
        if(multiplo3 == multiplo5){
            soma+=multiplo3;
        }else{
            soma+=multiplo3+multiplo5;
        }
    }

    printf("%d\n", soma);

    printf("----------------------------------------------------------\n");


}
