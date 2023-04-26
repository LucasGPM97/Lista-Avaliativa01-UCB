/*
4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação.

Entrada: coordenadas x , y float

Objetivo: Determine qual o quadrante ao qual pertence o ponto , ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0)

x=0y=0 = Origem
y=0 = Eixo X
x=0 = Eixo y

xy
++ Q1
-+ Q2
-- Q3
+- Q4

Saida: Quadrande pertencente

*/

#include <stdio.h>

int main()
{

    float x = 0, y = 0;

    printf("-------------------------------------\n");
    printf("  Quadrante no Plano Cartesiano\n");
    printf("-------------------------------------\n");

    printf("Informe o eixo x e y do P1\n");
    printf("Eixo X: ");
    scanf("%f", &x);
    printf("Eixo Y: ");
    scanf("%f", &y);

    printf("-------------------------------------\n");

    printf("O P1(%.1f,%.1f) pertence a: ", x, y);

    if (x == 0 && y == 0)
    {
        printf("Origem");
    }
    else
    {
        if (y == 0)
        {
            printf("Eixo X");
        }
        else
        {
            if (x == 0)
            {
                printf("Eixo Y");
            }
            else
            {
                if (x > 0 && y > 0)
                {
                    printf("Q1");
                }
                else
                {
                    if (x < 0 && y > 0)
                    {
                        printf("Q2");
                    }
                    else
                    {
                        if (x < 0 && y < 0)
                        {
                            printf("Q3");
                        }
                        else
                        {
                            printf("Q4");
                        }
                    }
                }
            }
        }
    }

    printf("\n-------------------------------------\n");

    return 0;
}