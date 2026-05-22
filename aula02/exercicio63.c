#include <stdio.h>
// 63. Um vendedor necessita de um algoritmo que calcule o preço total devido por um
// cliente. O algoritmo deve receber o código de um produto e a quantidade
// comprada e calcular o preço total, usando a tabela abaixo:
// Código do produto       Preço unitário
//       1001                  5,32
//       1324                  6,45
//       6548                  2,37
//       0987                  5,32
//       7623                  6,45
int main(){
    float preco_unitario, quantidade_comprada, preco_total, quantidade_produto;
    int codigo_produto;

    printf("informe codigo do produto: ");
    scanf("%d", &codigo_produto);

    if(codigo_produto == 1001){
        preco_unitario = 5.32;
    }
    if(codigo_produto == 1324){
        preco_unitario = 6.45;
    }
    if(codigo_produto == 6548){
        preco_unitario = 2.37;
    }
    if(codigo_produto == 987){
        preco_unitario= 5.32;
    }
    if(codigo_produto == 7623){
        preco_unitario = 6.45;
    }
    printf("insira a quantidade do produto: ");
    scanf("%f", &quantidade_produto);

    preco_total = preco_unitario * quantidade_produto;

    printf("o preco total do produto e: %.2f", preco_total);
}
// tudo isso pra apresentar switch case