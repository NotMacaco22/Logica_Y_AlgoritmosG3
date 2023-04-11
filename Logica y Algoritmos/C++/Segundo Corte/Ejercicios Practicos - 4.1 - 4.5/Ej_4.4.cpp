/* 4.4. Calcular la raíz cuadrada de un número y escribir su
resultado. Considerando el caso en que el número sea negativo. */

#include <iostream>
#include <math.h>
using namespace std;
void ejercicio();

int main(){
    ejercicio();
    return 0;
}
void ejercicio(){
    float num, raiz;
    cout<<"Ingrese un numero para calcular su raiz cuadrada."<<endl;
    cin>>num;
    if (num >= 0){
        raiz = sqrt(num);
        cout<<"La raiz del numero "<<num<<" es: "<<raiz;
    }
    else{
        system("cls");
        cout<<"Disculpe, no se puede sacar raiz de un numero negativo, intente de nuevo!"<<endl;
        cout<<endl;
        main();
    }
}