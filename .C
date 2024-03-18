#include <stdio.h>

int main()
{	
	//variavel
	int dia;

	printf ("Digite o dia da semana de 1 a 7:");//solicita o dia da semana
	scanf ("%d", &dia);// lê o dia da semana digitada pelo usuario

	//identifica o "dia" digitado pelo usuario para poder mostrar qual o resultado
	if ( dia == 1 )
	{
		printf ("\n|=======================================|");
		printf ("\n|1 - domingo                            |");
		printf ("\|n=======================================|");
	} else if ( dia == 2 )
	{
		printf ("\n|=======================================|");
		printf ("\n|2 - segunda                            |");
		printf ("\n|=======================================|");
	} else if (dia == 3 )
	{
		printf ("\n|=======================================|");
		printf ("\n|3 - terca                              |");
		printf ("\n|=======================================|");
	} else if (dia == 4 )
	{
		printf ("\n|=======================================|");
		printf ("\n4 - quarta                              |");
		printf ("\n|=======================================|");
	} else if (dia == 5 )
	{
		printf ("\n|=======================================|");
		printf ("\n|5 - quinta                             |");
		printf ("\n|=======================================|");
	} else if (dia == 6 )
	{
		printf ("\n|=======================================|");
		printf ("\n|6 - sexta                              |");
		printf ("\n|=======================================|");
	} else if (dia == 7 )
	{
		printf ("\n|=======================================|");
		printf ("\|n7 - sabado                             |");
		printf ("\|n=======================================|");
	} else {
        printf ("\n|=======================================|");
        printf ("\n|Valor invalido                         |"); // caso o valor digitado pelo usuario for invalido, irá mostrar "valor invalido"
        printf ("\n|=======================================|");
    }
	

}
