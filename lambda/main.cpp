#include<iostream>

#include<vector>

using namespace std;

class Contatto {

public:
Contatto(string nome,string cognome,string indirizzo):nome{nome},cognome{cognome},indirizzo{indirizzo}{

}

string getIndirizzo(){

    return indirizzo;
}

string getName(){

    return nome;
}

private:

string nome="";
string cognome="";
string indirizzo="";




};

class Rubrica{

public:
Rubrica(){

}

//questo mi serve per definire a runtime il tipo di valore passato alla funzione
//in questo caso il criterio sarà un lambda function
template <typename T>
vector<Contatto> cerca_per_indirizzo(T criterio){

    vector<Contatto> tmp;

    for(auto c : contatti){

        if(criterio(c.getIndirizzo())){

            tmp.push_back(c);
        }
    }

    return tmp;

}

private:

vector<Contatto> contatti={
    {"Nome1","Congome1","Via monti1"},
    {"Nome2","Congome2","Via Pippo"},
}; 


};

int main(){

    Rubrica r{};

    //string::npos carattere di fine line. Se trovo qualcosa il valore è diverso da npos
    // funzione lambda-> la string indirizzo assume il valore passato dalla fun<ione alla riga 44 criterio(c.getIndirizzo())
    //la funzione ritorna true o false
   vector<Contatto> contatti= r.cerca_per_indirizzo([](string indirizzo){ return indirizzo.find("monti")!= string::npos;} ); 

    for(auto c : contatti){

        cout <<c.getName()<<endl;
    }

    return 0;
}