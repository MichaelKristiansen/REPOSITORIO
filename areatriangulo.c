#include <stdio.h>
int main(){
    float area, base, altura;

    printf("insira a base: ");
    scanf("%f", &base);

    printf("insira a altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Área do triangulo é: %2.f", area);

    return 0;
}