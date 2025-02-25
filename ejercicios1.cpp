using namespace std;
#include <iostream>
#include <array>
#include <vector>
#include <cmath>


int main()
{

// ejercicio 1.1

/*
int uno = 0;
int dos = 0;
cout << "Tipe your number one: " << endl;
cin >> uno;
cout << "Tipe your number two: " << endl;
cin >> dos;
cout << "Your number one is: " << uno << endl;
cout << "Your number two is: " << dos << endl;

cout << "+: " << uno + dos << endl;
cout << "-: " << uno - dos << endl;
cout << "*: " << uno * dos << endl;
cout << "/: " << uno / dos << endl;
*/


// ejercicios 1.2

/*
double uno1 = 0;
double dos2 = 0;
cout << "Tipe the temperature: " << endl;
cin >> uno1;
cout << "Your temperature is: " << uno1 << "°C" << endl;
cout << "Your temperature is: " << uno1 + 274 << "°F" << endl;
*/


// Ejercicios 2.1

/*
int base = 0;
int altura = 0;
cout << "Base: " << endl;
cin >> base;
cout << "altura: " << endl;
cin >> altura;
cout << "Your area is: " << base*altura << endl;
*/


// Ejercicios 2.2 ****

/*
int par1 = 0;
int par2 = 2;
cout << "Tipe the number to see if its even and positive: " << endl;
cin >> par1;
bool par = true;
if (par1%par2 == 0 && par1 >= 2)
{
    par = true;
}
else
{
    par = false;
}

cout << boolalpha;
cout << "par: " << par << endl;
cout << notboolalpha;
*/



// Ejercicios 4.1 ****

/*
int n = 5;
int arre[n];
cout << "la cantidad de numeros a sumar son: " << n << endl; 
for (int i = 0; i < n; i++)
{
    cout << "Ingrese el numero " << i+1 << endl;
    cin >> arre[i];
    cout << "El valor del numero " << i+1 << " es: " << arre[i] << endl;
}
int suma = 0;
for (int i = 0; i < n; i++)
{
    suma = suma + arre[i];
}
cout << "la suma de los valores anteriormente digitados son: " << suma << endl;
if (suma%2 == 0)
{
    if (suma > 0)
    {
        cout << "El numero es Par y es Positivo" << endl;
    }
    else
    {
        cout << "El numero es Par y es negativo o 0" << endl;
    }
}
if (suma%2 == 1)
{
    if (suma > 0)
    {
        cout << "El numero es Impar y es Positivo" << endl;
    }
    else
    {
        cout << "El numero es Impar y es negativo o 0" << endl;
    }
}
*/



// Ejercicio 9.1

/*
cout << "Digite dos numeros para hayar el MCD de entre los dos"<< endl;
cout << "Primer número" << endl;
int pn = 0;
cin >> pn;
cout << "Segundo número" << endl;
int sn = 0;
cin >> sn;

int menor = 0;
int mayor = 0;

if (pn == sn)
{
    cout << "El MCD de "<< pn << " y " << sn << " es: " << pn << endl;
}
else
{
    if (pn > sn)
    {
        menor = sn;
        mayor = pn;
    }
    else
    {
        menor = pn;
        mayor = sn;
    }

    int menor2 = menor/2;
    if (mayor%menor == 0 && menor%menor == 0)
        {
            cout << "El MCD de "<< pn << " y " << sn << " es: " << menor << endl;
        }
        else
        {
            while (mayor%menor2 != 0 || menor%menor2 != 0)
            {
                menor2 = menor2 - 1;
            }
        cout << "El MCD de "<< pn << " y " << sn << " es: " << menor2 << endl;
        }
    }
}
*/














return 0;
}