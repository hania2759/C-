#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    float km_inicial, km_final, litros, distancia, media;

    printf("Digite os kms antes da viagem: ");
    scanf("%f", &km_inicial);

    printf("Digite os kms depois da viagem: ");
    scanf("%f", &km_final);

    printf("Digite o total de litros de gasolina gastos: ");
    scanf("%f", &litros);

    distancia = km_final - km_inicial;

    media = (litros / distancia) * 100;

    printf("O automovel gastou %.2f litros aos 100 kms.\n", media);

    return 0;
}