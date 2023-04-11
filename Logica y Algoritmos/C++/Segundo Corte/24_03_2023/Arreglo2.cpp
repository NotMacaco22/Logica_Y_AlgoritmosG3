/* Leer x cantidad de numeros  y sumar los numeros del arreglo*/
#include <iostream>
using namespace std;

int main(){
    /* Arreglo */
    int vector[5];
    int i = 0, cant = 0, suma = 0;
    
    cout<<"Cuantos elementos desea guardar?"<<endl;
    cin>>cant;
    
    if (cant >= 1 && cant <= 5){
    for ( i = 0; i < cant ; i++){
        cout<< "Dime un numero: "<<endl;
        cin>> vector[i];
    }

    system("cls");
    cout<<"Mostrar los elementos guardados"<<endl;

    for (i = 0; i < cant; i++){
        cout<< vector[i] <<endl;
        suma += vector[i];
        /* suma = suma + vector[i]; */
    }
    cout<<"La suma de todos los valores es "<<suma<<endl;
    }

else{
    cout<<"No se puede realizar el arreglo."<<endl;
    int x = main();
}

    return 0;
}