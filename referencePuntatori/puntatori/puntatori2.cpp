#include <iostream>

using namespace std;

int main()
{

    int *p;
    //alloco un area di memoria per 100 int
    p = new int[100];

    for (int i = 0; i < 200; i++)
    {

        p[i] = i;
    }

    //creo il nuovo puntatore

    int *t;

    t = new int[200];

    //copio tutti i valori puntati da p nei nuovi indirizzi di memoria
    for (int i = 0; i < 100; i++)
    {

        t[i] = p[i];
    }

    //elimino l'area di memoria allocata da p

    delete[] p;

    p = nullptr;

    //assegno al vecchio puntatore la nuova area di memoria allocata che potrà contenere 200 valori
    p = t;

    p[101] = 101;

    cout << p[101] << endl;

    return 0;
}