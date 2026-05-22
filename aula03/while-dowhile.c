#include <stdio.h>
// while dowhile
int main(){
    int soma = 0, n;

    do{
        printf("Informe o n: ");
        scanf("%d", &n);

        soma += n;

    }while(n != 0);
    
    printf("Total acumulado foi de %d", soma);
    return 0;
}