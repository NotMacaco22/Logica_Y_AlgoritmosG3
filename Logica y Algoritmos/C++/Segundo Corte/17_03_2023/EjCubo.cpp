//Leer un numero y elevarlo al cuadrado
#include <iostream>
using namespace std;

int cubo(int num);

int main(){
    cout<< cubo(5);
    return 0;
}

int cubo(int num){
    return num * num;
}