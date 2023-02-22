/*Escribir un programa que solicite ingresar 10 notas de alumnos y 
nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.*/

#include<iostream>

using namespace std;

int main()
{
    int x, nota, cont1, cont2;

    x = 1;
    cont1 = 0;
    cont2 = 0;

    while(x <= 10)
    {
        cout << "Ingrese un numero: ";
        cin >> nota;

        if(nota >= 7)
        {
            cont1++;
        }
        else
        {
            cont2++;            
        }    
        x++;    
    }

    cout << "Cantidad de alumnos con notas mayores o iguales a 7: ";
    cout << cont1;

    cout << "\n";

    cout << "Cantidad de alumnos con notas menores a 7: ";
    cout << cont2;

    return 0;
}