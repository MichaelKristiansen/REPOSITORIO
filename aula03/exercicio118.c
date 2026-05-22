#include <stdio.h>
// 118. Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10
// metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
// imprima quantos anos serão necessários para que Zé seja maior que Chico.
int main(){
    float altura_chico = 1.50, altura_ze = 1.10;
    float crescimento_chico = 0.02, crescimento_ze = 0.03;
    int anos_decorridos = 0;

    while(altura_ze <= altura_chico){
        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;

        anos_decorridos++;
    }
    printf("depois de %d anos, ze com %f metros de altura passou chico com %f metros de altura", anos_decorridos, altura_ze, altura_chico);
}