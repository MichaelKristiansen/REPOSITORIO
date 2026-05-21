#include <stdio.h>
int main(){
    float valor_atual;
    float  soma_positivos, quantidade_negativos = 0;
    int valor_max = 5;
    
    for (int i = 0; i < valor_max; i++){
        printf("informe o numero %d: ", i+1);
        scanf("%f", &valor_atual);

        if (valor_atual > 0){
            soma_positivos = valor_atual + soma_positivos;
        }
        else{
            quantidade_negativos++;
        }
    }
    printf("soma dos positivos: %f", soma_positivos);
    printf("quantidade dos negativos: %f\n", quantidade_negativos);
    
}