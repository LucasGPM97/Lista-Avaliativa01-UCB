/*

3. Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera 
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A 
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o 
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas 
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é 
outro inteiro 


Entrada: raio(R)

Objetivo:  volume : (4/3) * pi * R³
            área : 4 * pi * R²

Saida: Resultado das operaçoes: 

*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>
#define PI 3.14159

int main(){

    float area=0, volume=0, raio=0;

    printf("-----------------------------------\n");
    printf("Calculo da area e volume da esfera\n");
    printf("-----------------------------------\n");

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    area = 4*PI*(raio*raio);
    volume = (4.0/3.0)*PI*(raio*raio*raio);

    printf("-----------------------------------\n");

    printf("Area da esfera = %.2f\n", area);
    printf("Volume da esfera = %.2f\n", volume);

    printf("-----------------------------------\n");

    return 0;
}