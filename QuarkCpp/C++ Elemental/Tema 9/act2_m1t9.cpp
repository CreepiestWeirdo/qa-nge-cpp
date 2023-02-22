/*Se ingresan un conjunto de n alturas de personas por teclado. 
Mostrar la altura promedio de las personas.*/

#include<iostream>

using namespace std;

int main()
{
    int n, x;
    float h, suma, promedio;

    x = 1;
    suma = 0;

    cout << "Ingrese cantidad de personas: ";
    cin >> n;

    while (x <= n)
    {
        cout << "Ingrese altura: ";
        cin >> h;

        suma += h;
        x++;
    }
    promedio = suma/n;

    cout << "El promedio de altura es de: ";
    cout << promedio;

    return 0;
}