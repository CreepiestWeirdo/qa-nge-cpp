/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, 
imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese primer nro:";
    cin >> num1;
    
    cout << "Ingrese segundo nro:";
    cin >> num2;

    cout << "Ingrese tercer nro:";
    cin >> num3;

    if(num1 < 10 && num2 < 10 && num3 < 10)
    {
        cout << "Todos los numeros son menores a diez";
    }
    return 0;
}