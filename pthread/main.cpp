#include<iostream>

#include <pthread.h>
#include <string>
 

using namespace std;

#define NUM_THREADS 5
 
#define BLACK   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"

static pthread_mutex_t mutex;

void * PrintAsciiText(void *id){

    string colour;
    
    //MUTEX serve per evitare che più thread accedano allo stesso codice contemporaneamente
    pthread_mutex_lock(&mutex);
    switch((long)id)
    {
    case 0:
        colour = RED;
        break;
    case 1:
        colour = GREEN;
        break;
    case 2:
        colour = YELLOW;
        break;
    case 3:
        colour = BLUE;
        break;
    case 4:
        colour = CYAN;
        break;
    default:
        colour = BLACK;
        break;
    }
 
   cout << colour << "I'm a new thread, I'm number " << (long)id << BLACK << endl;
    
   pthread_mutex_unlock(&mutex);

   pthread_exit(NULL);
}

int main(){


    cout<<"ciao3"<<endl;

    pthread_t threads[NUM_THREADS];

    for (long int i=0;i<NUM_THREADS;i++){

        //referenza al thread
        //NULL parametri di default
        //PrintAsciiText-> Routine che vado ad eseguire
        // Indice identificativo relativo al thread eseguito
        int t= pthread_create(&threads[i],NULL,PrintAsciiText,(void*)i);

        if (t !=0 ){

            cout << "error Thread Creation"<<endl;
        }

    }


    //Controlla se tutti i thread sono terminati 
    //In questo modo il programma non prosegue se tutti i thread non sono terminati
    for (long int i=0; i< NUM_THREADS;i++){


        void * status;

        int t= pthread_join(threads[i],&status);

    }
    

    return 1;



}