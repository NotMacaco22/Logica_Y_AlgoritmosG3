/* Rellenar los elementos de un array con numeros reales 
positivos procedentes del teclado. */

#include <iostream>
using namespace std;
int main(){
    int numArray;
    cout<<"Ingrese la cantidad de numeros que quiere que tenga el arreglo."<<endl;
    cin>>numArray;
    
    if (numArray >= 1){

    int array[numArray];
    for (int i = 0; i < numArray; i++) {
        cout<<"Ingrese el numero "<<i+1<< " del arreglo."<<endl;
        cin >> array[i];
        
        while (array[i] < 0) {
            cout << "ERROR - El numero estrictamente tiene que ser positivo."<<endl;
            cout << "Ingrese el numero " << i+1 << " del arreglo."<<endl;
            cin >> array[i];
        }
    }
    
    system("cls");
    cout<<"Los elementos almacenados son los siguientes."<<endl;
    
    for (int i = 0; i < numArray; i++) {
        cout << array[i]<<"\t";
    }
 }

 else{
    cout<<"Valor ingresado no valido."<<endl;
    cout<<endl;
    main();
 }
 
    return 0;

}