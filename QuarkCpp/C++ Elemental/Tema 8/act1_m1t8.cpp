/*Realizar un programa que pida cargar una fecha cualquiera, 
luego verificar si dicha fecha corresponde a Navidad.*/

#include<iostream>

using namespace std;

int main()
{
    int dia, mes, año;
    
    cout << "Ingrese nro de día:";
    cin >> dia;
    
    cout << "Ingrese nro de mes:";
    cin >> mes;

    cout << "Ingrese nro de año:";
    cin >> año;
    
    if (mes==12 && dia==25) 
    {
        cout << "Corresponde a Navidad";
    }
    
    return 0;
}