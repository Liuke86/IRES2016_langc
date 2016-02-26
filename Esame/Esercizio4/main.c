/*Esercizio 4 (2.5 punti)

Creare una struttura Studente caratterizzata da un cognome e dal numero di esami sostenuti. Implementare le funzioni setCognome, getCognome, setNumeroEsami e getNumeroEsami che ne impostano e restituiscano rispettivamente il cognome e il numero di esami dello studente. Nota: non porrere limiti alla lunghezza del cognome.

Creare un array di 100000 Studenti così denominati:

Studente 1:
Cognome: “Cognome_1”
Voto: 1

Studente 2:
Cognome: “Cognome_2”
Voto: 2
…
Studente i:
Cognome: “Cognome_i”
Voto: i%10
..
Studente 100000:
Cognome: “Cognome_100000”
Voto: 0

Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.

Calcolare la somma dei voti degli studenti.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "studente.h"

int main()
{
	int len = 1000000;
    Studente* s = malloc(1000000 * sizeof(Studente));
    
    for (int i = 0; i < len; ++i)
    {
    	char cognome[15];
    	char ordine[7];
    	strcpy(cognome, "Cognome_");
    	sprintf(ordine, "%d", i + 1);
    	strcat(cognome, ordine);

    	Studente_setCognome(s + i, cognome);
    	Studente_setVoto(s + i, (i + 1) % 10);
    }

    int somma = 0;

    for (int i = 0; i < 1000000; ++i)
    	somma += Studente_getVoto(s + i);
    printf("La somma dei voti è %d\n", somma);

    return EXIT_SUCCESS;
}
