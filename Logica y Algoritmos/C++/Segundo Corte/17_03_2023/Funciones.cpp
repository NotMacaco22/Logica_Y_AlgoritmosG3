#include <iostream>
using namespace std;

int sumar(int num1, int num2);
int restar(int num1, int num2);
int multiplicar(int num1, int num2);
void dividir(int num1, int num2);

int main()
{
    cout << sumar(5, 8) << endl;
    cout << restar(5, 8) << endl;
    cout << multiplicar(5, 8) << endl;
    dividir(10,0);
    return 0;
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    return num1 - num2;
}

int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

void dividir(int num1, int num2)
{
    if (num2 > 0)
    {
        cout<< num1 / num2;
    }
    cout<<"No se puede dividir entre 0."<<endl;  
}
