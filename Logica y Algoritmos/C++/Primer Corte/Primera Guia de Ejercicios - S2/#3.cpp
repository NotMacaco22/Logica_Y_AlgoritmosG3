#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int salario, nuevoSal;
    cout<<"Ingrese su salario actual."<<endl;
    cin>>salario;
    nuevoSal = salario * 1.25;
    cout<<"Su nuevo salario con un incremento del 25% es de"<<nuevoSal<<endl;
    return 0;
}
