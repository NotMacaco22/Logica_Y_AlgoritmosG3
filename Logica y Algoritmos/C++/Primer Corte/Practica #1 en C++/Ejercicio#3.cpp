#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int conversion;
    float bytes;
    cout<<"Bienvenido a su convertor de Bytes, digite el numero al que desea convertir sus valiosos bytes."<<endl;
    cout<<"1. KB"<<endl;
    cout<<"2. MB"<<endl;
    cout<<"3. GB"<<endl;
    cout<<"4. TB"<<endl;
    cout<<"5. PB"<<endl;
    cout<<"6. EB"<<endl;
    cout<<"7. ZB"<<endl;
    cout<<"8. YB"<<endl;
    cout<<"9. Salir"<<endl;
    cin>>conversion;

    if (conversion==1){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float KB = bytes / 1024;
        cout<<bytes<<" bytes equivalen a "<<KB<<" kilobytes."<<endl;
        main();
    }

    if (conversion==2){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float MB = bytes / pow(1024,2);
        cout<<bytes<<" bytes equivalen a "<<MB<<" megabytes."<<endl;
        main();
    }

    if (conversion==3){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float GB = bytes / pow(1024,3);
        cout<<bytes<<" bytes equivalen a "<<GB<<" gigabytes."<<endl;
        main();
    }

    if (conversion==4){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float TB = bytes / pow(1024,4);
        cout<<bytes<<" bytes equivalen a "<<TB<<" terabytes."<<endl;
        main();
    }

    if (conversion==5){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float PB = bytes / pow(1024,5);
        cout<<bytes<<" bytes equivalen a "<<PB<<" petabytes."<<endl;
        main();
    }

    if (conversion==6){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float EB = bytes / pow(1024,6);
        cout<<bytes<<" bytes equivalen a "<<EB<<" exabytes."<<endl;
        main();
    }

    if (conversion==7){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float ZB = bytes / pow(1024,7);
        cout<<bytes<<" bytes equivalen a "<<ZB<<" zettabytes."<<endl;
        main();
    }

    if (conversion==8){
        cout<<"Escribe la cantidad de memoria en bytes: ";
        cin>>bytes;
        float YB = bytes / pow(1024,8);
        cout<<bytes<<" bytes equivalen a "<<YB<<" yottabytes."<<endl;
        main();
    }
    return 0;
}