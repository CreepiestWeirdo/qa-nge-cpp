/*Confeccionar un programa que lea n pares de datos, cada par de datos 
corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.*/

#include<iostream>

using namespace std;

int main()
{
    int n, b, h, sup, cant;
    cant = 0;
    cout << "Ingrese cantidad de triángulos: ";
    cin >> n;

    for(f = 1; f <= n ; f++)
    {
        cout << "Ingrese la medida de la base: ";
        cin >> b;
        cout << "Ingrese la medida de la altura: ";
        cin >> h;
        sup = b * h / 2;
        cout << "La superficie de triángulo es: ";
        cout << sup;       
        cout <<"\n";

        if (sup > 12)
        {
            cant++;
        }
    }
    cout << "Cantidad de triángulos con superficie mayor a 12: "
    cout << cant;
    return 0;
}