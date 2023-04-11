/* Ejemplo 9.2. El siguiente programa lee ocho enteros; 
a continuación visualiza el total de los números. */

#include <iostream>
using namespace std;

int main()
{
    int array[8];
    int tot = 0, i = 0, sum = 0;
    
    for ( i = 0; i < 8; i++){
        cout<<"Ingrese el numero "<<i+1<< " del arreglo."<<endl;
        cin>>array[i];
        tot += 1;   
        sum += array[i];
    }
    
    system("cls");
    cout<<"Los elementos almacenados son los siguientes."<<endl;

    for (i = 0; i < 8; i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<"Usted ingreso la cantidad de "<<tot<<" numeros."<<endl;
    cout<<"La suma de todos los numeros que ingreso es "<<sum<<"."<<endl;
    
    return 0;
}
