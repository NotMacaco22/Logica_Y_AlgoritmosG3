/* Elabore un programa que permita leer dos valores y diga el cuadrado del primer número y el cubo del segundo número.
Escriba el código en Cpp y subalo dicho archivo cpp en este espacio */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int primerNum, segundoNum, resultPrimer, resultSegun;
    cout<<"Ingrese un numero para decirle el cuadrado del mismo"<<endl;
    cin>>primerNum;
    cout<<"Ingrese otro numero para decirle el cubo del mismo"<<endl;
    cin>>segundoNum;
    resultPrimer = pow(primerNum,2);
    resultSegun = pow(segundoNum,3);
    cout<<endl;
    cout<<"El cuadrado del numero "<<primerNum<<" es: "<<resultPrimer<<endl;
    cout<<"El cubo del numero "<<segundoNum<<" es: "<<resultSegun<<endl;
    return 0;
}
