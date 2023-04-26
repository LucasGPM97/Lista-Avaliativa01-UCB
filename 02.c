/* 

2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no 
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais 
após a vírgula, segundo a fórmula:
    Distancia = √((x2-x1)² + (y2-y1)²)

Entrada: x1,y1 x2,y2 float

Objetivo: calcule a distância entre eles, mostrando 4 casas decimais 
após a vírgula, segundo a fórmula: Distancia = √((x2-x1)² + (y2-y1)²)
    
saida: resultado da operação.

*/

// Lucas Gabriel Pereira de Menezes

#include <stdio.h>
#include <math.h>

int main(){

    float x1=0, y1=0, x2=0, y2=0, distancia=0;

printf("--------------------------------------------------------------------\n");
printf("                Distancia entre os pontos P1 e P2\n");
printf("--------------------------------------------------------------------\n");

printf("Informe o eixo x e y do P1\n");
printf("Eixo X: ");
scanf("%f", &x1);
printf("Eixo Y: ");
scanf("%f", &y1);

printf("Informe o eixo x e y do P2:\n");
printf("Eixo X: ");
scanf("%f", &x2);
printf("Eixo Y: ");
scanf("%f", &y2);


distancia = sqrt(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));

printf("--------------------------------------------------------------------\n");

printf("Distancia entre os pontos P1(%.0f,%.0f) e P2(%.0f,%.0f) = %.4f\n", x1, y1, x2, y2, distancia);

printf("--------------------------------------------------------------------\n");

    return 0;
}