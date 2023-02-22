/*Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.*/

#include<iostream>

using namespace std;

int main()
{
    int x, producto;

    x = 8;
    
    //los multiplos son los resultados del producto de los numeros naturales por eso el fragmento de codigo comentado

    /*while(producto <= 500)
    {
        producto = 8 * x;
        if(producto <= 500)
        {            
            cout << producto;
            cout << " - ";
            x++;
        }
    }*/

    //pero calculandolo como suma el codigo es mas sencillo
        while(x <= 500)
    {
        cout << x;
        cout << " - ";
        x+=8;
    }

    return 0;
}