//Esercizio 1 (25 punti)
//Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti. 
//Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).

#include <stdio.h>
#include <stdlib.h>

double media(int* a, int len)
{
	double somma = 0;
	
	for (int i = 0; i < len; ++i)
		somma += a[i];

	return somma / len;
}

int main()

{
	int len = 100;
	int a[len];

	for (int i = 0; i < len; ++i)

	{
		a[i] = (i + 1) * 3;

	}
	
	double risultato = media(a, len);
	printf("Media = %f\n", risultato);
	
	return EXIT_SUCCESS;
}
