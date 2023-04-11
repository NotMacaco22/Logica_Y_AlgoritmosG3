#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int horas, valorHora, salario;
    cout<<"Ingrese las horas que trabajo."<<endl;
    cin>>horas;
    cout<<"Ingrese el pago por cada hora."<<endl;
    cin>>valorHora;
    salario = horas * valorHora;
    cout<<"Su salario en base a las horas trabajadas y el pago por cada una va a ser de "<<salario<<endl;
    return 0;
}
