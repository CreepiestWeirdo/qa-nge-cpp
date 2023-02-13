#include<iostream>

using namespace std;

/*Escribir un programa en el cual se ingresen cuatro números, 
calcular e informar la suma de los dos primeros 
y el producto del tercero y el cuarto.*/

int main()
{
int num1, num2, num3, num4, suma, producto;
cout << "Ingrese primer numero: ";
cin >> num1;
cout << "Ingrese segundo numero: ";
cin >> num2;
cout << "Ingrese tercer numero: ";
cin >> num3;
cout << "Ingrese cuarto numero: ";
cin >> num4;
suma = num1 + num2;
producto = num3 * num4;
cout << "La suma del primero y segundo es: ";
cout << suma;   
cout << "\n";
cout << "El producto del tercero y cuarto es: ";
cout << producto;   
return 0;
}