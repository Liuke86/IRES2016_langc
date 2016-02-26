/*Esercizio 2 (25 punti)

Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza 
crei un terzo array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal 
primo elemento dell’array a). Esempio (in pseudocodice):

a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]
Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] 
e un array contenente i primi 100 numeri interi dispari [1,3,5,7,9,11,13,...]. Stampare a console l’array 
risultate dalla chiamata alla funzione zip.
*/

#include <stdio.h>
#include <stdlib.h>

void zip(int* a, int* b, int* c, int len)
{
	for (int i = 0, n = 0, k = 0; i < len; ++i)
	{
		if (i % 2 == 0)
		{

			c[i] = a[n];
			++n;
		}
			
		else
		{
			c[i] = b[k];
			++k;
		}
			
	}

}

int main()

{
	int len_ab = 100;
	
	int a[len_ab];
	for (int i = 0; i < len_ab; ++i)
	    a[i] = i * 2;
		
	int b[len_ab];
	int add = 1;
	for (int i = 0; i < len_ab; ++i)
	{
		b[i] = add;
		add += 2;
	}
	printf("\n");
		

	int len_c = 2 * sizeof(a)/sizeof(int);
	int c[len_c];

	zip(a, b, c, len_c);
	for (int i = 0; i < len_c; ++i)
		printf("%d ", c[i]);
	printf("\n\n");

	return EXIT_SUCCESS;
}

