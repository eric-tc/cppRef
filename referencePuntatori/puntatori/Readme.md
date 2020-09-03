# Puntatori 1 Concetti base
Concetti base

1) I puntatori sono definiti attraverso *

char * p; -> definizione di un puntatore

2) I puntatori possono essere inizializzati con nullptr

char *p = nullptr

3) Allocazione della memoria con new

p= new (char[100]); -> p indica l'indirizzo al primo byte di memoria del blocco

4) Elminazione del puntatore e resistuzione dell'area di memoria

delete[] p; -> uso [] se devo deallocare un'area di memoria con più valori(array ecc...)

delete p; se p è un singolo valore(char,int,float ecc...)

5) Dopo il delete inizializzare sempre il puntatore con nullptr

# Puntatori 2 Riallocare memoria puntatore

Rialloocare nuova memoria dinamicamente quando una struttura dati non riesce più a memorizzare nuovo codice


1) Creare un nuovo puntatore con la keyword new

2) Copiare i vecchi valori nel nuovo puntatore

3) Elminare con delete[] la memoria allocata dal vecchio puntatore

4) Copiare il valore del nuovo puntatore in quello vecchio con un operazione di assegnamento

# Puntatori 3 Puntatori a funzione

I puntatori a funzione possono essere utili quando una funzione deve ritornare un numero indefinito di valori che non può essere assegnato in fase di compilazione