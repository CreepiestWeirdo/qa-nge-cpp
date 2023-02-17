/*Se ingresan tres valores por teclado, 
si todos son iguales se imprime la suma del primero con el segundo 
y a este resultado se lo multiplica por el tercero.*/

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
    
    if (num1 == num2 && num1 == num3) 
    {
        int suma = num1 + num2;
        cout << "Suma = ";
        cout << suma;
        int producto = suma * num3;
        cout << "\n";
        cout << "Suma multiplicada por el tercero: ";
        cout << producto;
        
    }
    
    return 0;
}