#include <iostream>
using namespace std;
/* Ejercicio #2: Leer la nota de un estudiante y decir si aprobó 
o reprobó, un estudiante aprueba si su nota es mayor o igual a 70. */

void aprobado();
void noAprobado();

int main()
{
    float nota;
    cout<<"Ingrese su nota en este corte evaluativo."<<endl;
    cin>> nota;

    if (nota >= 70){
        aprobado();
    }
    
    else{
        noAprobado();
    }
    
    return 0;
}

void aprobado(){
    cout<<"Felicidades, ha aprobado este corte evaluativo."<<endl;
}

void noAprobado(){
    cout<<"Lamentablemente no ha aprobado este corte evaluativo."<<endl;
}
