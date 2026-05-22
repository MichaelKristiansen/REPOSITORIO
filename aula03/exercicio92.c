#include <stdio.h>
// Faça um algoritmo que calcule o valor de A, dado por:
// A = n + n-1/2 + n-2/3 + ... + 1/n
// , onde N é um número inteiro positivo.
int main(){
    int n, a = 0;

    printf("informe o numero n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
            a = ((n-i)/(i+1)) + a;
            //a += (n-(i-1)) / i;       
    }
    printf("resultado de A e: %d", a);
}