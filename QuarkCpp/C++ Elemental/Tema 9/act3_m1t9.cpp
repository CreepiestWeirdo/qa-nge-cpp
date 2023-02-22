/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, 
realizar un programa que lea los sueldos que cobra cada empleado e 
informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. 
Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.*/

#include<iostream>

using namespace std;

int main()
{
    int x, n, sueldo, cont1, cont2, sumatoria;

    cout << "Ingrese cantidad de empleados: ";
    cin >> n;

    x = 1;
    cont1 = 0;
    cont2 = 0;
    sueldo = 0;

    while(x <= n)
    {
        cout << "Ingrese su sueldo: ";
        cin >> sueldo;
        
        sumatoria += sueldo;
        
        if (sueldo < 100)
        {
            cout << "Usted cobra más de 100, vuelva a ingresar.";
            x--;
        }
        else if (sueldo >= 100 && sueldo <= 300)
        {
            cont1++;
        }
        else 
        {
            cont2++;
        }            
        x++;        
    }
    cout << "Total a pagar a los empleados: ";
    cout << sumatoria; 

    return 0;
}