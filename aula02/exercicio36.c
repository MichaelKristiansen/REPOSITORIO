#include <stdio.h>
int main(){
    float valor_venda, comissao;

    printf("informe o valor de sua valor_venda: ");
    scanf("%f", &valor_venda);
    
    if (valor_venda > 50000){
        comissao = valor_venda * 0.12;
    }else if(valor_venda >= 30000 && valor_venda <= 50000){
            comissao = valor_venda * 0.095;
        }else{
            comissao = valor_venda * 0.07;
        }
    
    printf("sua comissao e: %2.f", comissao);
    return 0;
}