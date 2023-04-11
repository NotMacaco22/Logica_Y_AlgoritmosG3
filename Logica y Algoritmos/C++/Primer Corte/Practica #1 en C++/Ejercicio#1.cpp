#include <iostream>
using namespace std;

int main()
{
    int a, b, cambio = 0;
    cout<<"Ingrese un valor para A."<<endl;
    cin>>a;
    cout<<"Ingrese un valor para B."<<endl;
    cin>>b;
    cambio = a;
    a = b;
    b = cambio;
    cout<<"El nuevo valor para A va a ser "<<a<<endl;
    cout<<"El nuevo valor para B va a ser "<<b<<endl;
    
    return 0;
}
