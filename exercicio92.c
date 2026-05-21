#include <stdio.h>
// A = n + n-1/2 + n-2/3 + ... + 1/n
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