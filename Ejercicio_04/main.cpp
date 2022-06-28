#include <iostream>
using namespace std;

/*Diseñar un algoritmo recursivo, que permita invertir el contenido de un
vector. Como indica el ejemplo:
Vector original: 28 35 12 43 56 77
Vector invertido: 77 56 43 12 35 28
El algoritmo no podrá usar un vector auxiliar.*/

int main()
{

    int vec[10];
    int tamano = 10;
    int i = 0;
    cout << "Ingrese un numero: " << endl;
    do
    {
        cin >> vec[i];
        i++;
    } while (i < tamano);
    for (int j = i - 1; j >= 0; j--)
    {
        cout << vec[j] << " ";
    }
    cout << endl;
    
    return 0;


}