#include<iostream>

using namespace std;

/*Se ingresan tres notas de un alumno, si el promedio 
es mayor o igual a siete mostrar un mensaje "Promocionado".*/

int main()
{
    int nota1, nota2, nota3;
    float promedio;

    cout << "Ingresa primer nota: ";
    cin >> nota1;
    cout << "Ingresa segunda nota: ";
    cin >> nota2;
    cout << "Ingresa tercera nota: ";
    cin >> nota3;
    promedio = (nota1 + nota2 + nota3) / 3;

    if(promedio >= 7)
    {
        cout << "Promocionado";
    }
    
    return 0;
}