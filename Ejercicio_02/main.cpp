#include <iostream>
using namespace std;

void valorMayorYMenor(int vector[], int tamano, int &mayor, int &menor)
{
    mayor = vector[0];
    menor = vector[0];

    for (int i = 1; i < tamano; i++)
    {
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
        if (vector[i] < menor)
        {
            menor = vector[i];
        }
    }

    cout << "El valor mayor es: " << mayor << endl;
    cout << "El valor menor es: " << menor << endl;
}



int main()
{

    int vec[15];
    int mayor, menor;

    for (int i = 0; i < 15; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> vec[i];
    }

    valorMayorYMenor(vec, 15, mayor, menor);



}