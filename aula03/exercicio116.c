#include <stdio.h>
// 116. Faça um algoritmo que leia um número e divida-o por dois (sucessivamente)
// ate que o resultado seja menor que 1. Mostre o resultado da ultima divisão e a
// quantidade de divisões efetuadas.
int main(){
    float n, n_inicial;
    int repeticoes = 0;

    printf("digite um numero maior que 1: ");
    scanf("%f", &n);
    n_inicial = n;

    while(n >= 1){
        n /= 2;
        repeticoes++;
    }
    
    printf("O numero %.2f digitado foi dividido %d vezes por 2 ate chegar ao valor de %.2f", n_inicial, repeticoes, n);
}