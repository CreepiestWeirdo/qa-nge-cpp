/*Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y 
muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.*/
#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero positivo de 3 cifras: ";
    cin >> num; 

    if(num < 10 )
    {
        cout << "Tiene una cifra";
    }
    else
    {
        if(num < 100)
        {
            cout << "Tiene dos cifras";
        }
        else
        {
            if(num < 1000)
            {
                cout << "Tiene 3 cifras";
            }
            else
            {
                cout << "Dato inválido";
            }
        }
    }
}