#include <stdio.h>
#include <stdlib.h>

#include "moltiplicazione.h"

int main()
{
	int risultato;
	risultato = moltiplicazione(3, 5);
	printf("Moltiplicazione di 3 x 5 = %d\n", risultato);
	risultato = moltiplicazione(0, 15);
	printf("Moltiplicazione di 0 x 15 = %d\n", risultato);

	return EXIT_SUCCESS;
}
