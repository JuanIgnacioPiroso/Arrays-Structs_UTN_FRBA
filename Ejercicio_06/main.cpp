#include <iostream>
using namespace std;

/* Realice un subprograma que muestre el contenido de un vector en forma
ordenada descendentemente. El tamaño del array es informado por
parámetro */

void mostrarVectorDescendente(int vector[], int tamano)
{
    for (int i = tamano - 1; i >= 0; i--)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{

    int vec[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> vec[i];
    }

    mostrarVectorDescendente(vec, 10);
}