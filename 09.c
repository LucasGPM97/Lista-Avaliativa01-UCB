/* 
9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, 
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo 
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade 
de frutas. Ao final, apresente o valor total da compra. 
1 => ABACAXI – 5,00 a unidade 
2 => MAÇA – 1,00 a unidade 
3 => PERA – 4,00 a unidade 

Entrada: Qtd de frutas

objetivo: calcular total ad compra, permitir voltar ao menu quantas vezes quiser, listar as frutas disponiveis.

Saida: total

*/

#include <stdio.h>

int valida_opcao();

int main(){
    
    int quantidade=0, decisao=0;
    float total=0;


    do{

        printf("--------------------------------------------------\n");
        printf("                Venda de Frutas\n");
        printf("--------------------------------------------------\n");

        printf("                Lista de Produtos\n\n");
        printf("    [1]   -    Abacaxi    -   R$5,00 unidade\n");
        printf("    [2]   -    Maca       -   R$1,00 unidade\n");
        printf("    [3]   -    Pera       -   R$4,00 unidade\n");
        printf("    [4]   -    Finalizar Compra\n");
        printf("--------------------------------------------------\n");
        

        decisao = valida_opcao();
        printf("\n");

        switch(decisao){

        case 1:
            printf("    Abacaxi - R$5,00 a unidade!\n");
            printf("    Quantidade: ");
            scanf("%d", &quantidade);
            total+= quantidade * 5.00;
        break;

        case 2:
            printf("    Maca - R$1,00 a unidade!\n");
            printf("    Quantidade: ");
            scanf("%d", &quantidade);
            total+= quantidade * 1.00;
        break;

        case 3:
            printf("    Pera - R$4,00 a unidade!\n");
            printf("    Quantidade: ");
            scanf("%d", &quantidade);
            total+= quantidade * 4.00;
        break;
    }

    }while(decisao != 4);

    printf("--------------------------------------------------\n");
    printf("    Total da compra = R$%.2f\n", total);
    printf("--------------------------------------------------\n");

    return 0;
}

int valida_opcao(){
    int n=0;
    do{
        printf("\n    Escolha um indice: ");
        scanf("%d", &n);
    }while(n != 1 && n != 2 && n != 3 && n !=4);

    return n;
}