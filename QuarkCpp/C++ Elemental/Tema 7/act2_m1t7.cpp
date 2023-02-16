#include<iostream>

using namespace std;

/*Se ingresa por teclado un valor entero, 
mostrar una leyenda que indique si el número
es positivo, negativo o nulo (es decir cero)*/

int main()
{
    int num;

    cout << "Ingresa un numero: ";
    cin >> num;

    if(num>0)
    {
        cout <<"Es positivo";
    }
    else
    {
        if(num<0)
        {
            cout <<"Es negativo";
        }
        else
        {
            cout <<"Es cero";
        }
        
    }

    return 0;
}