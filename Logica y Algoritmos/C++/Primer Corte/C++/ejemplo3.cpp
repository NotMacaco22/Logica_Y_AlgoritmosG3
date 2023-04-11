#include <iostream>
using namespace std;

int main()
{
    /*Leer un numero 
    decir si es multiplo de 5*/
    int num;
    cout<<"Ingrese un numero"<<endl;
    cin>> num;
    if (num %5 == 0)
    {
        cout<<"El numero "<<num<<" es multiplo de 5."<<endl;
    }
    else{
        cout<<"No es multiplo de 5."<<endl;
    }
    return 0;
}
