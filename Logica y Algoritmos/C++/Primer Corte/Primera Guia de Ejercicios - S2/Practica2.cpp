#include <iostream>
using namespace std;
//leer un numero del 1 al 4 y realice una de las operaciones matematicas

int main()
{
    int num1,num2, opc;
    int opeSum, opeRes, opeMul, opeDiv;
    cout<<"Que desea hacer?"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Digite un # para realizar la accion que desea."<<endl;
    cin>>opc;

    if (opc == 1){
      cout<<"---SUMA---"<<endl;
      cout<<"Ingrese un numero"<<endl;
      cin>>num1;
      cout<<"Ingrese otro numero"<<endl;
      cin>>num2;
      opeSum = num1 + num2;
      cout<<"La suma es "<<opeSum<<endl;
      main(); //recursividad , va a volver a pedir el main
    }
   
    if (opc == 2){
      cout<<"---RESTA---"<<endl;
      cout<<"Ingrese un numero"<<endl;
      cin>>num1;
      cout<<"Ingrese otro numero"<<endl;
      cin>>num2;
      opeRes = num1 - num2;
      cout<<"La resta es "<<opeRes<<endl;
      main(); //recursividad , va a volver a pedir el main
    }
   
    if (opc == 3){
      cout<<"---MULTIPLICACION---"<<endl;
      cout<<"Ingrese un numero"<<endl;
      cin>>num1;
      cout<<"Ingrese otro numero"<<endl;
      cin>>num2;
      opeMul = num1 * num2;
      cout<<"La multiplicacion es "<<opeMul<<endl;
      main(); //recursividad , va a volver a pedir el main
    }
    
    if (opc == 4){
      cout<<"---DIVISION---"<<endl;
      cout<<"Ingrese un numero"<<endl;
      cin>>num1;
      cout<<"Ingrese otro numero"<<endl;
      cin>>num2;
      opeDiv = num1 / num2;
      cout<<"La division es "<<opeDiv<<endl;
      main(); //recursividad , va a volver a pedir el main
    }

    if (opc == 5)
    {
        cout<<"Adios."<<endl;
    }
    
    return 0;
}
