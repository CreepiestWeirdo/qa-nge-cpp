#include<iostream>

using namespace std;

/*Se debe desarrollar un programa que pida 
el ingreso del precio de un artículo y la cantidad que lleva el cliente. 
Mostrar lo que debe abonar el comprador.*/

int main()
{
int cantAComprar;
float precioArt, total;
cout << "Ingrese precio del articulo: ";
cin >> precioArt;
cout << "Ingrese cantidad que lleva: ";
cin >> cantAComprar;
total = precioArt * cantAComprar;
cout << "Debera abonar: ";
cout << total;
return 0;
}