#include<iostream>

using namespace std;

/*Realizar un programa que lea cuatro valores numéricos 
e informar su suma y promedio.*/

int main()
{
int num1, num2, num3, num4, suma, promedio;
cout << "Ingrese primer numero: ";
cin >> num1;
cout << "Ingrese segundo numero: ";
cin >> num2;
cout << "Ingrese tercer numero: ";
cin >> num3;
cout << "Ingrese cuarto numero: ";
cin >> num4;
suma = num1 + num2 + num3 + num4;
promedio = suma / 4;
cout << "La suma de los 4 valores es: ";
cout << "\n";
cout << "Su promedio es: ";
cout << promedio;
return 0;
}