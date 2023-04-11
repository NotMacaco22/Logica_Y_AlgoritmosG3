#include <iostream>
using namespace std;

/*Ejercicio #1: Realice un algoritmo para determinar cuánto pagará una persona 
en una tienda por un artículo, considerando que tiene un descuento del 20% cuando 
se compran dos o más ejemplares del artículo. Recuerde calcular el 
15% de I.V.A (Impuesto al Valor Agregado), el subtotal y el total a pagar.*/

void descuento(float precio);
void iva(float precio);


int main()
{
    int cantArt;
    float precio;

    cout<<"Ingrese la cantidad de articulos que compro."<<endl;
    cin>> cantArt;
    cout<<"Ingrese el precio total de los articulos (IVA NO INCLUIDO)."<<endl;
    cin>> precio;
    
    if (cantArt >= 2){
        descuento(precio);
    }
    else{
        iva(precio);
    }
        
    return 0;
}

void descuento(float precio){
    float descuentoApli = precio * 0.20;    /* Descuento Aplicado */
    float IVA = ( (precio * 0.80) *  0.15 );   /* IVA De La Compra */
    float tot = ( (precio * 0.80) *  1.15 );    /* Compra Total - Descuentos e IVA Aplicados */
  
    cout<<"Su compra es de "<<precio<<"."<<endl;
    cout<<"Debido a la cantidad de articulos que compro se le reduce un 20%, traducidos en "<<descuentoApli<<"."<<endl;
    cout<<"El IVA de la compra es de "<<IVA<<"."<<endl;
    cout<< "El total a pagar sera de "<<tot<<"."<<endl;
}


void iva(float precio){
    float IVA = precio * 0.15;
    float tot = precio * 1.15;
    cout<< "El IVA de su compra es de "<<IVA<<"."<<endl;
    cout<< "El total a pagar con IVA incluido sera de "<<tot<<"."<<endl;
}