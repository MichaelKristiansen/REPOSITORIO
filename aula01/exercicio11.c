#include <stdio.h>

// 11. Faça um algoritmo que:
// a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
// b) Obtenha o valor para a variável VH (valor hora trabalhada):
// c) Obtenha o valor para a variável PD (percentual de desconto);
// d) Calcule o salário bruto => SB = HT * VH;
// e) Calcule o total de desconto => TD = (PD/100)*SB;
// f) Calcule o salário líquido => SL = SB – TD;
// g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
// Liquido.

int main(){
    float HT, VH, PD,SB, TD, SL;

    printf("insira o a quantidade de horas trabalhadas: ");
    scanf("%f", &HT);

    printf("insira o valor por hora trabalhada: ");
    scanf("%f", &VH);

    printf("insira o percentual de desconto: ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD/100)*SB;
    SL = SB - TD;

    printf("\nHoras trabalhadas: %.2f", HT);
    printf("\nSalario Bruto: %.2f", SB);
    printf("\nDesconto: %.2f", TD);
    printf("\nSalario Liquido: %.2f", SL);
}