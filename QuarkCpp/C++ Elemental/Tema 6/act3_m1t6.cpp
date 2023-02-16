#include<iostream>

using namespace std;

/*Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) 
mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse 
para tener dos dígitos un número entero)*/

int main()
{
    int num;
    
    cout << "Ingrese un numero del uno al 99: ";
    cin >> num;

    if(num < 10)
    {
        cout << "Es de un digito";
    } 
    else
    {
        cout << "Es de dos digitos";
    }
}