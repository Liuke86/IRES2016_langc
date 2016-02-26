
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "studente.h"

void Studente_setCognome(Studente* this, char* cognome)
{
	int len = strlen(cognome);
	this->cognome = malloc(len + 1);
	strcpy(this->cognome, cognome);
}

void Studente_getCognome(Studente* this, char* cognome, int len)
{
	strncpy(cognome, this->cognome, len);
	cognome[len - 1] = '\0';
}

void Studente_setVoto(Studente* this, int voto)
{
	this->voto = voto;
}

int Studente_getVoto(Studente* this)
{
	return this->voto;
}
