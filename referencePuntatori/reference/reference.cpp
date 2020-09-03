#include<iostream>
#include <stdio.h>
#include <fstream>
#include <istream>
using namespace std;




int main(){


fstream f ("/home/aistudios/Desktop/2020/cppRef/referencePuntatori/test.txt",ios::in | ios::out | ios::binary);

int p[100];

//p = new(int[100]);

//punto il puntatore alla fine del file
f.seekg(0,ios::end);

//la dimensione è -1 se non ho caricato il file
long dimension = f.tellg();

f.seekg(0, ios::beg);

cout <<"dimensione originale " <<dimension<<endl;

//In questo caso sto copiando una seconda area di memoria
long dimension2= dimension;


//referenza alla dimensione del file 
//ogni cambiamento a rdim sarà riportato su dimension
long &rdim= dimension;


rdim=0;

cout <<"dimensione " <<dimension<<endl;

//dimension 2 è una nuova area di memoria quindi il suo valore non cambia se cambio il valore della referenza rdim
cout << "dimensione 2 "<<dimension2<<endl;


return 0;


}