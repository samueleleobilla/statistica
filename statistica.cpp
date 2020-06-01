#include <iostream>
#include "statistica.h"
using namespace std;

char titolo[5][20] = {"Analfabeta","Licenza elem.","Licenza media","Diplomati","Laureati"};

void carica(persona d[],int n){
    for(int i=0; i<n; i++)
        cin>>d[i].Nome>>d[i].Sesso>>d[i].Eta>>d[i].TitIstr;
}

void stampa(persona d[],int n,char s){
    cout<<"Nome\tSesso\tEta\tTitolo\n";
    for(int i=0; i<n; i++){
        if(s=='T' || s==d[i].Sesso){
            cout<<d[i].Nome<<"\t";
            cout.width(3);
            cout<<d[i].Sesso<<"\t";
            cout.width(3);
            cout<<d[i].Eta<<"\t";
            cout<<titolo[d[i].TitIstr]<<endl;
        }
    }
    cout<<"<II================II>"<<endl;
}

int contaPerSesso(persona d[],int n,char c){
  int np = 0;
  for(int i = 0; i < n; i++ ){
    if( d[i].Sesso == c )
      np++;
    }
  return np;
}

int contaPerTitolo(persona d[],int n,int t){
  int np = 0;
  for( int i = 0; i < n; i++ ){
    if ( d[i].TitIstr == t )
      np++;
    }
  return np;
}

void report(persona d[],int n,int t){
  if(t == 1){
    cout<<"Le persone sono:"<<endl;
    cout<<"M:"<<contaPerSesso(d, n, 'M')<<endl;
    cout<<"F:"<<contaPerSesso(d, n, 'F')<<endl;
  }else if(t==0){
    for(int i = 0; i < 5; i++){
      cout<<titolo[i]<<": "<<contaPerTitolo(d, n, i)<<endl;
    }
  }else{
        cout<<"le persone sono:"<<endl;
    cout<<"M:"<<contaPerSesso(d, n, 'M')<<endl;
    cout<<"F:"<<contaPerSesso(d, n, 'F')<<endl<<endl;
    cout<<"I titoli sono:"<<endl;
    for(int i = 0; i < 5; i++){
      cout<<titolo[i]<<": "<<contaPerTitolo(d, n, i)<<endl;
    }
  }
}
