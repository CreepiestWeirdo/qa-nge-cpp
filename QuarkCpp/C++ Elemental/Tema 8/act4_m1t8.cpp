/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, 
imprimir en pantalla la leyenda "Alguno de los números es menor a diez".*/

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

    if(num1 < 10 || num2 < 10 || num3 < 10)
    {
        cout << "Alguno de los numeros es menor a diez";
    }
    return 0;
}