#include <iostream>

using namespace std;

//le variabili globali sono messe nella memoria Heap

//utilizzo dei puntatori void*.
// I puntatori void* il loro tipo può essere assegnato a runtime

void stampa(void* p,int num_ele, int tipo){

for(int i=0; i<num_ele;i++)
    switch (tipo)
    {
    case 1:
        
        int* t;
        
        t = static_cast<int *>(p);

        cout<<t[i]<<endl;
        
        break;
    case 0:

        double *dp;

        dp = static_cast<double *> (p);

        cout << dp[i]<<endl;

    default:
        break;
    }



}

int main(){

int* p;

p= new int[10];

for (int i=0; i<10; i++){

    p[i]=i;

}


double *d= new double[10];

for (int i=0;i<10;i++){


    d[i]=2.0;
}

stampa(p,10,1);

stampa(d,10,0);


}