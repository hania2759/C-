
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");

	int n;

	do

	{

		printf("Diz um número\n");

		scanf_s("%i", &n);

		if (n == 0)

		{

		}

		if (n % 3 == 0)


			printf("número é multiplo de 3\n");


		if (n % 5 == 0)


			printf(" número é multiplo de 5\n");



	} while (n != 0);

	printf("sai porque carregaste no zero");
}


