/* 4.5. Escribir los diferentes métodos para deducir 
si una variable o expresión numérica es par. */

#include <iostream>
using namespace std;
void ejercicio();

int main()
{
    ejercicio();    
    return 0;
}

void ejercicio(){
    int num;
    cout<<"Ingrese un numero y le dire si es par o no."<<endl;
    cin>>num;
    if (num % 2 == 0){
        cout<<"El numero es par!"<<endl;
    }
    else{
        cout<<"El numero no es par."<<endl;
    }
}