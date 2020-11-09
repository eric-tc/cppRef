#include <iostream>

using namespace std;
class test
{

public:
    test(){

    }

    void addNumber()
    {
    }
    template <class t>
    void print(t value){

        cout<<value<<endl;
        
    }

private:

    int add=0;
};

int main()
{   
    test t;

    t.print<string> ("test");

    t.print<int>(1);


    return 0;
}