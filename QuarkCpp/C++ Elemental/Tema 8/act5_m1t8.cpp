/*Escribir un programa que pida ingresar la coordenada de un punto en el plano, 
es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)*/

#include<iostream>

using namespace std;

int main()
{
    int coorX, coorY;

    cout << "Ingresa el valor X del punto: ";
    cin >> coorX;

    cout << "Ingresa el valor Y del punto: ";
    cin >> coorY;

    if(coorX > 0 && coorY > 0)
    {
        cout << "Está en el primer cuadrante";
    }
    else
    {
        if(coorX < 0 && coorY > 0)
        {
            cout << "Está en el segundo cuadrante";
        }
        else
        {
            if(coorX < 0 && coorY < 0)
            {
                cout << "Está en el tercer cuadrante";
            }
            else
            {
                cout << "Está en el cuarto cuadrante";
            }
        }
    }
    return 0;
}