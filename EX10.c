#include <stdio.h>

#include <locale.h>

int main(void)

{

    setlocale(LC_ALL, "");

    int numero;

    do

    {

        printf("Diz um numero: ");

        scanf("%d", &numero);

        if (numero == 0)

        {

            printf("Digitou 0 - vai sair do programa\n");

        }

        else if (numero > 0)

        {

            printf("O numero e positivo\n");

        }

        else

        {

            printf("O numero e negativo\n");

        }

    } while (numero != 0);

    return 0;

}
