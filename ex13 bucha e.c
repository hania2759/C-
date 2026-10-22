#include <stdio.h>

#include <locale.h>

int main(void)



{
    
    int n, maior, menor;
    setlocale(LC_ALL, "");
    printf("Digite um numero: ");

    scanf_s("%d", &n);

    maior = n;

    menor = n;

    while (n != 0)

    {

        if (n > maior)

            maior = n;

        if (n < menor)

            menor = n;

        printf("Digite um numero: ");

        scanf_s("%d", &n);

    }

    printf("Maior = %d\n", maior);

    printf("Menor = %d\n", menor);

    return 0;

}
