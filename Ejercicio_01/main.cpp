#include <iostream>
using namespace std;

void mostrarVectorSentidoInverso(int vector[], int tamano)
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

    mostrarVectorSentidoInverso(vec, 10);
}