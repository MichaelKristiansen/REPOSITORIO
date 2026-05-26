//vetor e matriz
#include <stdio.h>
int main(){
    float nota[5], media = 0, soma_notas;
    for (int i = 0; i < 5; i++){
        printf("insira a nota %d: ", i+1);
        scanf("%f", &nota[i]);
        soma_notas += nota[i];
    }
    
    media = soma_notas / 5;

    printf(" a media das notas e: %.2f", media);
    return 0;
}