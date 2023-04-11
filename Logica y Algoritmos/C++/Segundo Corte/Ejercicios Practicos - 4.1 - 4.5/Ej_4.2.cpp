/* 4.2. Escribir un programa que solicite al usuario introducir dos números. 
Si el primer número introducido es mayor que el segundo número, 
el programa debe imprimir el mensaje El primer número es el mayor,
en caso contrario el programa debe imprimir el mensaje El primer número es el más pequeño.
Considerar el caso de que ambos números sean iguales e imprimir el correspondiente mensaje. */

#include <iostream>
using namespace std;
void ejercicio();

int main(){
    ejercicio();
    return 0;
}

void ejercicio(){
    float num1, num2;
        cout<<"Ingrese un numero."<<endl;
        cin>>num1;
        cout<<"Ingrese otro numero."<<endl;
        cin>>num2;

        if (num1 == num2){
            cout<<"Ambos numeros son iguales!"<<endl;
        }
        else{
            if (num1 > num2){
                cout<<"El primer numero es el numero mayor."<<endl;
            }
            else{
                cout<<"El primer numero es el mas pequeño."<<endl;
            }
        }
}