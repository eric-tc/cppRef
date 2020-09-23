#include<iostream>

using namespace std;

#define ORT_RUNTIME_CLASS(X) struct Ort##X; typedef struct Ort##X Ort##X;






class Status
{

public:

    int t=1;
    
    Status()
    {
        cout<<"test"<<endl;
    }

    int test()
    {

        return 1;
    }
};

ORT_RUNTIME_CLASS(Status);

typedef OrtStatus* OrtStatusPtr;

struct OrtStatus{

    string po;
    int in;
};

int main(){

   
    OrtStatus s;

    s.in;

    OrtStatusPtr ort = new OrtStatus();

    ort->in=1;
    return 1;

   

}