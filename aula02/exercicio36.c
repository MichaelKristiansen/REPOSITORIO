#include <stdio.h>
// 36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
// comissão calculada de acordo com o valor de suas vendas. Se o valor da venda
// de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor
// vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
// 50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro
// caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório
// contendo nome, valor da venda e comissão de cada um dos corretores. O
// relatório deve mostrar também o total de vendas da empresa.
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