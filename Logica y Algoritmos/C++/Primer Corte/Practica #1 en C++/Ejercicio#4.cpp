#include <iostream>
using namespace std;

int main()
{
    int dia, mes, anio;
    cout<<"Ingrese el dia."<<endl;
    cin>>dia;
    cout<<"Ingrese el mes."<<endl;
    cin>>mes;
    cout<<"Ingrese el anio."<<endl;
    cin>>anio;
    dia = dia + 1;

    if (mes == 2)
    {
         if ( (anio % 4 == 0) & (anio % 100 != 0) || (anio % 400 == 0) )  
    {
        cout<<"Es un anio bisiesto, Febrero tiene mas dias, por lo que la fecha seria:"<<endl;
        if (dia > 29){
            dia = 1;
            mes = 3;
            }

    }
    else
    {
        if (dia > 28){
            dia = 1;
            mes = 3;
            }

    }
    }

    else if ( (mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) {
        /*31 Dias Max*/
        if (dia > 31)
        {
            dia = 1;
            if (mes == 12)
            {
            dia = 1;
            mes = 1;
            anio = anio + 1;
            }
            else{
                mes = mes + 1;
            }
            
        }
        
    }

    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)){
        /*30 Dias Max*/
         if (dia > 30)
        {
            dia = 1;
            mes = mes + 1;
    }
    }
    
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
    return 0;
}
