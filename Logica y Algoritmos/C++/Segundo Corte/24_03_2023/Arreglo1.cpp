/* Leer x cantidad de numeros */
#include <iostream>
using namespace std;

int main()
{
    /* Arreglo */
    int vector[1000];
    int i = 0, cant = 0;

    cout<<"Cuantos elementos desea guardar?"<<endl;
    cin>>cant;
    for ( i = 0; i < cant ; i++)
    {
        cout<< "Dime un numero: "<<endl;
        cin>> vector[i];

    }

    system("cls");
    cout<<"Mostrar los elementos guardados"<<endl;

    for (i = 0; i < cant; i++)
    {
        cout<< vector[i] <<endl;
    }
    

    return 0;
}
