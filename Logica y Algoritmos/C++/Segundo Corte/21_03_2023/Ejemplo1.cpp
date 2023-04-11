#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    /* string */
    string cadena = "hola mundo";
    // cout<< toupper(cadena[0]);
    for (int i = 0; i < cadena.size(); i++)
    {
        cadena[i] = toupper(cadena[i]);
    }
    cout << cadena << endl;
    return 0;
}
