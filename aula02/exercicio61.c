#include <stdio.h>
// 61. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média
// deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a
// opção escolhida pelo usuário e calcule a média:
// 1- aritmética
// 2- ponderada (pesos 3, 3, 4)
int main(){
    int tipo_media;
    float n1, n2, n3, media;
    
    printf("Qual tipo de media voce deseja fazer?\n");
    printf("1- aritimetica\n");
    printf("2- ponderada (pesos 3, 3, 4)\n");
    scanf("%d", &tipo_media);

    printf("insira as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    switch(tipo_media){
        case 1:
            media = (n1 + n2 + n3) / 3;
        break;
        case 2:
            media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
        break;
        default:
        printf("tipo nao disponivel");
        break;
    }
        printf("a media e: %.2f ", media);
}