#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int horas, min, seg;
    cout<<"Ingrese una cantidad de horas para convertirla en minutos y segundos"<<endl;
    cin>>horas;
    min = horas * 60;
    seg = horas * 3600;
    cout<<horas<<" hora(s) en minutos son "<<min<<endl;
    cout<<horas<<" hora(s) en segundos son "<<seg<<endl;
    return 0;
}
