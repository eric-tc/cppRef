#include <iostream>

using namespace std;

//In questo esempio è mostrato come passare correttamente i puntatori ad una funzione
//Obiettivo aumentare a runtime la dimensione di un array allocando nuova memoria ad un array già esistente

//argv e argc indica rispettivamente un array con i parametri passati mentre lancio eseguibile e il numero di parametri passati
//argv[0] è sempre il nome del programma

//Se voglio passare un puntatore non posso MAI passarlo per copia mi serve sempre la referenza 
//altrimentin questo caso la nuova area di memoria allocata diventa inaccessibile(Memory Leak)
void incrementaDimensione(int* &p, int &num_ele){

    num_ele=num_ele+10;
    //allocare memoria sulla heap esiste anche fuori dallo scopo della funzione
    int *pn= new int[num_ele];



    for (int i=0;i<10;i++){

        

        pn[i]=(p)[i];

        cout<<"ELE "<<p[i]<<endl;
    }


    for (int i =0; i<num_ele;i++){

        pn[i]=i;
        cout<< "PN "<< pn[i]<<endl;
    }


    delete[] p;

    p=nullptr;

    p=pn;



    for (int i =0; i<num_ele;i++){

            
        cout<< "P "<< p[i]<<endl;
    }

    
    cout << &p<<endl;

    cout << &pn<<endl;

 
}

int main(int argc, char *argv[]){

    
    int *p= new int [10];
    int num_ele=10;
    
    for(int i=0;i<10;i++){

        p[i]=i;
    }


    incrementaDimensione(p,num_ele);


    cout << &p <<endl;

    cout<<"NUM ELE "<<num_ele<<endl;

    for (int i=0;i<num_ele;i++){

        cout<<"OUT ELE" <<p[i]<<endl;

    }



return 0;

}