#include <iostream>
const int NMAX = 20;

struct persona{
    char Nome[20];
    char Sesso;
    int Eta;
    int TitIstr;     // Valore intero compreso tra 0 e 4 da utilizzare
            // come indice dell'array successivo:
            // a ciascun valore corrisponde la descrizione
            // del titolo di studio posseduto

};
void carica(persona [], int);
void stampa(persona [], int, char);
int contaPerSesso(persona [], int, char);
int contaPerTitolo(persona [], int, int);
void report(persona [], int, int);
