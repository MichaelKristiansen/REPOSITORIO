#include<stdio.h>
int main(){
    int tamanho_matriz = 0, diagonal_principal = 0, triangulo_superior = 0, triangulo_inferior = 0, diagonal_secundaria = 0;
    
    //informar o tamanho da matriz
    printf("qual tamanho da matriz quadrada: ");
    scanf("%d", &tamanho_matriz);
    
    int matriz[tamanho_matriz][tamanho_matriz];    
    
    //definir valores na matriz
    for (int i = 0; i < tamanho_matriz; i++){
        for (int j = 0; j < tamanho_matriz; j++){
            printf("informe o numero da posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //imprimir matriz
    for (int i = 0; i < tamanho_matriz; i++){
        for (int j = 0; j < tamanho_matriz; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    // diagonal principal
    for (int i = 0; i < tamanho_matriz; i++){
        for (int j = 0; j < tamanho_matriz; j++){
         if( i == j ){
            diagonal_principal += matriz[i][j];
         }
         if( j > i ){
            triangulo_superior += matriz[i][j];
         }
         if( i > j ){
            triangulo_inferior += matriz[i][j];
         }
         if( i + j == tamanho_matriz - 1 ){
            diagonal_secundaria += matriz[i][j];
         }   
        }
    }

    printf("diagonal principal: %d \n", diagonal_principal);
    printf("triangulo superior: %d \n", triangulo_superior);
    printf("triangulo inferior: %d \n", triangulo_inferior);
    printf("diagonal secundaria: %d \n", diagonal_secundaria);
}