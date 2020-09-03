# Reference

1) La reference può essere assegnata solo ad un oggetto già definito

int &p = new (int[100]); //Ritorna un errore

2) La reference una volta definita non può più essere cambiata. Il suo valore rimane sempre quello.

3) Utile per essere usata come parametro di input ad una funzione

void fz(int &p)