/* 

8. Elabore um programa que faça a leitura de vários números inteiros até que se digite 
um número negativo. O programa tem de retornar o maior e o menor número lido 

entrada: numeros inteiros

instrucao: parar quando numero for negativo e gravar o maior e menor numero digitado

saida: maior e menor numero digitado


*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>

int main(){

    int n=0, maior=0, menor=1000;

    printf("-------------------------------------\n");
    printf("Para sair digite um numero negativo!\n\n");

    do{

        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if(maior < n){
            maior = n;
        }

        if(menor > n && n >= 0){
            menor = n;
        }

    }while(n>=0);

    printf("-------------------------------------\n");
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("-------------------------------------\n");
    
    return 0;
}