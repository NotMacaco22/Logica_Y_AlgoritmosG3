/* 4.3. Dados tres números deducir cuál es el central. */

#include <iostream>
using namespace std;
void ejercicio();
int main(){
    ejercicio();
    return 0;
}
void ejercicio(){
    float num1, num2, num3;
    cout<<"Introduce el primer numero."<<endl;
    cin>>num1;
    cout<<"Introduce el segundo numero."<<endl;
    cin>>num2;
    cout<<"Introduce el tercer numero."<<endl;
    cin>> num3;

    if (num1 == num2 && num2 == num3) {
        cout<<"Los tres numeros son iguales."<<endl;
    }

    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        
        if (num1 == num2 && num2 == num3) {
            cout<<"Los tres numeros son iguales."<<endl;
        }

        else if (num1 == num2 && num2 != num3) {
            cout<< "El numero central es: "<<num1<<endl;
        }

        else if (num1 == num3 && num3 != num2) {
            cout <<"El numero central es: "<<num1<<endl;
        }

        else if (num2 == num3 && num3 != num1) {
            cout <<"El numero central es: "<<num2<<endl;
        }
    }

    else {
        if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
            cout<<"El numero central es: "<<num1<<endl;
        }
        else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
            cout <<"El numero central es: "<<num2<<endl;
        }
        else {
            cout<<"El numero central es: "<<num3<<endl;
        }
    }
}