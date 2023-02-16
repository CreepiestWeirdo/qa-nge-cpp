#include<iostream>

using namespace std;

/*Se cargan por teclado tres números distintos. 
Mostrar por pantalla el mayor de ellos.*/

int main()
{
    int num1, num2, num3;

    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;
    cout << "Ingrese tercer numero: ";
    cin >> num3;

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            cout << num1;
        }
        else
            cout << num3;
    }
    else
    {
        if(num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
   }
   return 0;
}