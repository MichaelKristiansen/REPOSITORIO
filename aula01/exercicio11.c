#include <stdio.h>

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