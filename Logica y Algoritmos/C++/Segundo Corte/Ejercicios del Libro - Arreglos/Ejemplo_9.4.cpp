/*Ejemplo 9.4 Visualizar el array muestra despues 
de introducir datos en el mismo, separandolos con el tabulador. */

#include <iostream>
using namespace std;

int main(){
    int numArray, i = 0;
    cout<<"Ingrese la cantidad de numeros que quiere que tenga el arreglo."<<endl;
    cin>>numArray;
    int array[numArray];

    for ( i = 0; i < numArray; i++){
        cout<<"Ingrese el numero "<<i+1<< " del arreglo."<<endl;
        cin>>array[i];
    }
    
    system("cls");
    cout<<"Los elementos almacenados son los siguientes."<<endl;

    for (i = 0; i < numArray; i++){
        cout<<array[i]<<"\t";
    }

    return 0;
}
