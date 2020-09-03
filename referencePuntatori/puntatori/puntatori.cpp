#include <iostream>
#include <fstream>
#include <istream>

using namespace std;

int main(){

    //lettura immagine

    fstream f("../dog.jpeg",ios::binary | ios::in | ios::out);
    
    //puntatore alla fine del file
    f.seekg(0,ios::end);

    long dimension= f.tellg();

    f.seekg(0,ios::beg);

    cout<<dimension<<endl;
    //inizializzazione del puntatore
    char* immagine=nullptr;

    //alloco una quantita di memoria sufficiente a contente tutta l'immagine
    //restituisce l'indirizzo del primo byte della memoria del blocco
    immagine = new char[dimension];



    f.read(immagine,dimension);

    for (int i=1000; i<dimension;i++){


        immagine[i]= rand()%256;

    }

    //usato per la scrittura
    f.seekp(0,ios::beg);
    
    f.write(immagine,dimension);

    f.close();
    f.clear();
    
    //restituisco la memoria 
    
    delete[] immagine;

    immagine=nullptr;



return 0;

}