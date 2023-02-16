#include<iostream>

using namaspace std;

/*Realizar un programa que solicite la carga por teclado de dos números, 
si el primero es mayor al segundo informar su suma y diferencia, 
en caso contrario informar el producto 
y la división del primero respecto al segundo.*/

int main()
{
    int num1, num2; 
    
    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segundo valor: ";
    cin >> num2; 
    if (num1 > num2)
    {
        int suma, diferencia;
        suma = num1 + num2;
        diferencia = num1 - num2; 
        cout << "La suma es: ";
        cout << suma;
        cout << "\n"
        cout << "La resta es: ";
        cout << diferencia;
    }
    else
    {
        int producto;
        float division;
        producto = num1 * num2;
        division = num1 / num2;
        cout << "El producto es: ";
        cout << producto;
        cout << "\n"
        cout << "La division es: ";
        cout << division;
    }
    return 0;
}