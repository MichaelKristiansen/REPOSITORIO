#include <stdio.h>

int main(){
    float n1, n2, media;
    
    printf("informe nota 1: ");
    scanf("%f", &n1);

    printf("informe nota 2: ");
    scanf("%f", &n2);

    media  = (n1 + n2) / 2;
    
    printf(" A média é: %.2f", media);

    return 0;
}