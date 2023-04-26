/* 
10. Faça um programa que leia 10 inteiros e imprima sua média

entrada: 10 numeros inteiros

objetivo: calcular media

saida: media
*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>

int main(){

    int n[10]={0}, i=0, soma=0;
    float media=0;
    printf("--------------------------------------------------\n");
    printf("              Media de 10 numeros\n");
    printf("--------------------------------------------------\n");

    for(i=0;i<10;i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &n[i]);
        soma+=n[i];
    }

    media = soma/10.0;
    printf("--------------------------------------------------\n");
    printf("A media dos 10 numeros = %.1f\n", media);
    printf("--------------------------------------------------\n");

    return 0;
}