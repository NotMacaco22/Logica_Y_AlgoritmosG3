#include <iostream>
using namespace std;

int main()
{
    int anio;
    cout<<"Ingrese un anio."<<endl;
    cin>>anio;

    if ( (anio % 4 == 0) & (anio % 100 != 0) || (anio % 400 == 0) )  
    {
        cout<<"Es Bisiesto"<<endl;
    }
    else
    {
        cout<<"No Es Bisiesto"<<endl;
    }

    return 0;
}
