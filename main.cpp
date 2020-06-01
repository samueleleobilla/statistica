#include <iostream>
#include "statistica.h"
using namespace std;

int main(){
    persona dati[NMAX];
    int ndati;
    cin>>ndati;
    carica(dati, ndati);
    stampa(dati,ndati,'T');
    stampa(dati,ndati,'F');
    report(dati, ndati, 3);
    return 0;
}
