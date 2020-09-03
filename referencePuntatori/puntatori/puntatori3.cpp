#include <iostream>
using namespace std;

//ritornare tutti i valori dell'array che sono dentro alla soglia
// I valori ritornati possono essere in numero diverso dipendenti dalla soglia utilizzata

int *soglia(int array[], int num_ele, int min, int max, int &valorisoglia)
{

    for (int i = 0; i < num_ele; i++)
    {

        if (array[i] < max && array[i] > min){
            valorisoglia++;
            
        }
    }
    //alloco un nuovo puntatore con allocazione di memoria solo quella necessaria per i valori dentro alla soglia

    cout<< " Valori Soglia "<< valorisoglia <<endl;

    int *p = new int[valorisoglia];

    for (int i = 0, counter = 0; i < num_ele; i++){
        if (array[i] < max && array[i] > min){
            p[counter++] = array[i];

        }
    }
    return p;
}

int main()
{
    int array[10]={23,35,23,54,65,74,37,25,7,61};

    int* t;
    int valorisoglia=0;
    t= soglia(array,10,30,80,valorisoglia);

    cout<<valorisoglia<<endl;

    for (int i=0; i<valorisoglia;i++)
        cout<< t[i]<<endl;



    return 0;
}