#include <stdio.h>

int main(){
    int tamanho_vetor, maior_numero, menor_numero;

    printf("insira o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    
    int numero[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++){
        printf("insira o numero %d: ", i+1);
        scanf("%d", &numero[i]);
    }
    
    maior_numero = numero[0];
    menor_numero = numero[0];

    for (int i = 1; i < tamanho_vetor; i++){
        if(numero[i] > maior_numero){
            maior_numero = numero[i];
        }
    }
    
    for (int i = 1; i < tamanho_vetor; i++){
        if(numero[i] < menor_numero){
            menor_numero = numero[i];
        }
    }

    printf("o maior numero e: %d \n", maior_numero);
    printf("o menor numero e: %d", menor_numero);
    
    return 0;
}