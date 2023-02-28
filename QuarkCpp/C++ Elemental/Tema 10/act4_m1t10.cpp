/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y 
nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/

#include<iostream>

using namespace std;

int main()
{
    int f, n, x;
    cout << "Ingrese un número entre 1 y 10: ";
    cin >> n
    for(f = 1; f <= 12 ; f++)
    {
        x = f * n;
        cout << x;
        cout << "-";
    }
    return 0;
}