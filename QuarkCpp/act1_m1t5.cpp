#include<iostream>

using namespace std;
/*Realizar la carga del lado de un cuadrado, 
mostrar por pantalla el perímetro del mismo 
(El perímetro de un cuadrado se calcula 
multiplicando el valor del lado por cuatro)*/

int main()
{
int lado, perimetro;
cout << "Ingrese valor del lado del cuadrado: ";
cin >> lado;
perimetro = lado * 4;
cout << "Su perimetro es: ";
cout << perimetro;
return 0;
}