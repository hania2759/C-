#include <stdio.h>
#include <locale.h>
int main(void)
{

	setlocale(LC_ALL, "");
	float notas;
	printf("qual a nota do aluno? ");
	scanf_s("%f", &notas);
	if (notas < 9.5)
	{
		printf("reprovado,estuda mais");
	}
	else {
		printf(" passou mano");
	}
	return 0;
}