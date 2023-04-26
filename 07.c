/* 

7. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

Entrada: numero inteiro positivo

Objetivo: calcular o enesimo termo da sequencia de Fibonacci

Saida: Mostrar o enesimo termo ...

*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>


int main(){

    unsigned long long int  fibonacci=0, termo1=0, termo2=0;
    int numero=0, i=0;

    printf("--------------------------------------------------\n");
    printf("     Enesimo termo da sequencia Fibonacci\n");
    printf("--------------------------------------------------\n");

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }while(numero <0);

    
    termo2=1;
    for(i=0;i<numero;i++){
        termo1 = termo2;
        termo2 = fibonacci;
        fibonacci =+ termo1 + termo2;
    }

    printf("O %d termo da sequencia Fibonacci = %llu",numero, fibonacci);
    
    printf("\n--------------------------------------------------\n");


    return 0;
}


