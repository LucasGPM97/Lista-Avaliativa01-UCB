/* 

5. Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: 
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

Entrada: numero positivo

Objetivo: achar os divisores do numero

Saida: os divisores do numero informado.

*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>


int main(){

    int numero=0, i=0;

    printf("-------------------------------------\n");
    printf("        Divisores do numero\n");
    printf("-------------------------------------\n");

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("-------------------------------------\n");

    printf("Os divisores de %d sao: \n", numero);

    for(i=1;i<=numero;i++){
        if(numero%i == 0){
            printf("%d,", i);
        }
    }

    printf("\n-------------------------------------\n");




    return 0;
}