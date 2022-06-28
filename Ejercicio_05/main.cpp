#include <iostream>
using namespace std;

/* Hacer un programa que permita realizar la suma y el producto de dos
vectores. El usuario deberá poder elegir el tamaño del vector (entre 2 y 10
valores).*/

int main()
{

    int vec1[10];
    int vec2[10];
    int vec3[10];
    int vec4[10];
    int tamano = 10;
    int i = 0;
    cout << "Ingrese un numero: " << endl;
    do
    {
        cin >> vec1[i];
        i++;
    } while (i < tamano);
    i = 0;
    cout << "Ingrese un numero: " << endl;
    do
    {
        cin >> vec2[i];
        i++;
    } while (i < tamano);
    i = 0;
    for (int j = 0; j < tamano; j++)
    {
        vec3[j] = vec1[j] + vec2[j];
        vec4[j] = vec1[j] * vec2[j];
    }
     cout << "Suma de los vectores: " << endl;

    for (int j = 0; j < tamano; j++)
    {
        cout << vec3[j] << " ";
        
    }
    cout << endl;

    cout << "Producto de los vectores: " << endl;
    for (int j = 0; j < tamano; j++)
    {
        cout << vec4[j] << " ";
    }
    cout << endl;
    return 0;



}