/* Lea un numero del 1 al 7 y diga el nombre del dia de la semana */
#include <iostream>
using namespace std;

/* Declaracion de la funcion dias */
void decirDias(); 

/* Funcion Dias */
void decirDias(){ 
    int dia;
    cout<<"Ingrese un numero del 1 al 7 y le indicare el dia correspondiente."<<endl;
    cin>>dia;

    switch (dia){
    case 1:
        cout<<"Domingo"<<endl;
        break;
    
    case 2:
        cout<<"Lunes"<<endl;
        break;
    
    case 3:
        cout<<"Martes"<<endl;
        break;
    
    case 4:
        cout<<"Miercoles"<<endl;
        break;
    
    case 5:
        cout<<"Jueves"<<endl;
        break;
    
    case 6:
        cout<<"Viernes"<<endl;
        break;
    
    case 7:
        cout<<"Sabado"<<endl;
        break;
    
    default:
    system("cls");
    cout<<"Numero ingresado no valido - Intente nuevamente.";
    cout<<endl;
    decirDias();
    }
}