/* 4.1. Escribir las sentencias "si" apropiadas para cada una de las siguientes condiciones:

a) Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo recto" 
sino imprimir el mensaje "El ángulo no es un ángulo recto".

b) Si la temperatura es superior a 100 grados, visualizar el mensaje 
“por encima del punto de ebullición del agua” sino visualizar el mensaje 
“por debajo del punto de ebullición del agua”.

c) Si el número es positivo, sumar el número a total de positivos, sino sumar al total de negativos.

d) Si x es mayor que y, y z es menor que 20, leer un valor para p.

e) Si distancia es mayor que 20 y menos que 35,leer un valor para tiempo.*/

#include <iostream>
using namespace std;

void ejercicio(); /* Corazon Programa */
void menu(); /* Funcion Menu*/
void tercerIncisoBien(int cantNum); /* Funcion Exclusiva para el Inciso C (Correcto)*/
void tercerIncisoFallo(); /* Funcion Exclusiva para el Inciso C (Fallo) */

int main(){
    ejercicio();
    return 0;
}

void ejercicio(){
    int opc;
    cout<<"Que desea realizar?"<<endl;
    cout<<"1. Saber si un angulo es recto por medio de los grados."<<endl;
    cout<<"2. Saber si la temperatura que ingrese esta por encima o por debajo del punto de ebullicion del agua."<<endl;
    cout<<"3. Saber cuantos numeros positivos y negativos hay en los numeros ingrese."<<endl;
    cout<<"4. Por medio de tres numeros que ingrese permitir o no que el programa lea un valor para p."<<endl;
    cout<<"5. Por medio de la distancia que ingrese permitir o no que el programa lea un valor para tiempo."<<endl;
    cin>>opc;
    switch (opc){
    case 1:
        /* Inicio Primer Inciso */
        system("cls");
        float grados;
        cout<<"Ingrese una cantidad de grados y le dire si es un angulo recto o no."<<endl;
        cin>>grados;

        if (grados == 90){
            cout<<"Los grados que ingreso indican que es un angulo recto."<<endl;}
        else{
          cout<<"Los grados que ingreso indican que no es un angulo recto."<<endl;
        } 
        cout<<endl;
        menu();
    /* Fin Primer Inciso*/
        break;
    case 2:
    /* Inicio Segundo Inciso */
        system("cls");
        float temp;
        cout<<"Ingrese una cantidad de grados centigrados."<<endl;
        cin>>temp;

        if (temp > 100){
            cout<<"Los "<<temp<<" grados centigrados que ingreso estan por encima del punto de ebullicion del agua."<<endl;}
        else{
            cout<<"Los "<<temp<<" grados centigrados que ingreso estan por debajo del punto de ebullicion del agua."<<endl;
        }
        cout<<endl;
        menu();
    /* Fin Segundo Inciso*/
        break;
    case 3:
    /* Inicio Tercer Inciso */
        system("cls");    
        int cantNum;
        cout<<"Ingrese una cantidad de numeros para poder almacenarlos."<<endl;
        cin>>cantNum;
        if (cantNum >= 1){
          tercerIncisoBien(cantNum);
        }
        else{
          tercerIncisoFallo();    
        }
        cout<<endl;
        menu();
        break;
    /* Fin Tercer Inciso*/
    case 4:
    /* Inicio Cuarto Inciso */
        system("cls");
        float xNum, yNum, zNum;
        int pNum;
        cout<<"Necesito que me proporcione tres valores: "<<endl;
        cout<<"Ingrese el numero x."<<endl;
        cin>>xNum;
        cout<<"Ingrese el numero y."<<endl;
        cin>>yNum;
        cout<<"Ingrese el numero z."<<endl;
        cin>>zNum;

        if ((xNum > yNum) && (zNum < 20)){
            cout<<"Ingrese un valor para leerlo (Le llamaremos p a ese valor que ingrese)."<<endl;
            cin>>pNum;
            cout<<endl;
            menu();
        }
        else{
            cout<<"Gracias por tu tiempo!";
            cout<<endl;
            menu();
        }
        break;
    /* Fin Cuarto Inciso*/
    case 5:
    /* Inicio Quinto Inciso */
        system("cls");
        float dist, tiempo;
        cout<<"Ingrese una distancia."<<endl;
        cin>>dist;
        if ((dist > 20) && (dist < 35)){
            cout<<"Ingrese un valor para poder leerlo (Le llamaremos tiempo a ese valor que ingrese)."<<endl;
            cin>>tiempo;
            cout<<endl;
            menu();
        }
        else{
        cout<<endl;
            cout<<"Gracias por tu tiempo!";
            cout<<endl;
            menu();
        }
        break;
    /* Fin Quinto Inciso*/
    default:
        system("cls");
        cout<<"Error en la opcion a elegir, por favor seleccione nuevamente."<<endl;
        main();
        break;
    }    
}
void menu(){
    int opcInside;
    cout<<"Que desea realizar ahora?"<<endl;
        cout<<"1. Menu principal"<<endl;
        cout<<"2. Salir"<<endl;
        cin>>opcInside;
    switch (opcInside){
    case 1:
        system("cls");        
        main();
        break;
    case 2:
    cout<<"Adios!"<<endl;
        break;
    default:
        system("cls");
        cout<<"Error en la opcion seleccionada, intente de nuevo."<<endl;
        cout<<endl;
        menu();
        break;
    }   
}
void tercerIncisoBien(int cantNum){
    int posiNums = 0, negaNums = 0, neutroNums = 0;
    float nums;
    for (int i = 0; i < cantNum; i++){
        cout<<"Ingrese el numero "<<i+1<<" de "<<cantNum<<"."<<endl;
        cin>> nums;
        if (nums > 0){
            posiNums += 1;
        }
        else{
            if (nums == 0){
                neutroNums+= 1;
            }
            else{
                negaNums += 1;
            }    
        }
    }
    cout<<endl;
    if (neutroNums >= 1){
        cout<<"Ingreso la cantidad de "<<posiNums<<" numero(s) positivo(s)"<<endl;
        cout<<"Ingreso la cantidad de "<<negaNums<<" numero(s) negativos(s)"<<endl;
        cout<<endl;
        cout<<"Tambien me di cuenta que ingreso la cantidad de "<<neutroNums<<" veces el numero 0, el cual es considerado un numero neutro."<<endl;
        cout<<"Pero en caso que quieras contar los ceros como numeros positivos entonces las cantidades de numeros ingresados serian las siguientes:"<<endl;
        cout<<endl;        
        cout<<"Hay un total de "<<(posiNums + neutroNums)<<" numeros positivos (contando el numero 0) y un total de "<<negaNums<<" numero(s) negativos(s)"<<endl;
    }
    else{
        cout<<"Ingreso la cantidad de "<<posiNums<<" numero(s) positivo(s)"<<endl;
        cout<<"Ingreso la cantidad de "<<negaNums<<" numero(s) negativos(s)"<<endl;
    }
}
void tercerIncisoFallo(){
    int cantNum, posiNums = 0, negaNums = 0, neutroNums = 0;
    float nums;
    system("cls");
    cout<<"No puedo almacenar numeros negativos, por favor ingresa numeros positivos."<<endl;
    cout<<"Ingrese la cantidad de numeros que quiere ingresar."<<endl;
    cin>>cantNum;
    
    if (cantNum >= 1)
    {
    
    for (int i = 0; i < cantNum; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<" de "<<cantNum<<"."<<endl;
        cin>> nums;
        if (nums > 0)
        {
            posiNums += 1;
        }
        else
        {
            if (nums == 0)
            {
                neutroNums+= 1;
            }
            else
            {
                negaNums += 1;
            }
            
        }

    }
    cout<<endl;
    if (neutroNums >= 1){
        cout<<"Ingreso la cantidad de "<<posiNums<<" numero(s) positivo(s)"<<endl;
        cout<<"Ingreso la cantidad de "<<negaNums<<" numero(s) negativos(s)"<<endl;
        cout<<endl;
        cout<<"Tambien me di cuenta que ingreso la cantidad de "<<neutroNums<<" veces el numero 0, el cual es considerado un numero neutro."<<endl;
        cout<<"Pero en caso que quieras contar los ceros como numeros positivos entonces las cantidades de numeros ingresados serian las siguientes:"<<endl;
        cout<<endl;        
        cout<<"Hay un total de "<<(posiNums + neutroNums)<<" numeros positivos (contando el numero 0) y un total de "<<negaNums<<" numero(s) negativos(s)"<<endl;
    }
    else{
        cout<<"Ingreso la cantidad de "<<posiNums<<" numero(s) positivo(s)"<<endl;
        cout<<"Ingreso la cantidad de "<<negaNums<<" numero(s) negativos(s)"<<endl;
    }
    }
    else
    {
        tercerIncisoFallo();
    }
}