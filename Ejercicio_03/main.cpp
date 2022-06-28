#include <iostream>
using namespace std;

    /* Se leen las letras de una palabra carácter a carácter. El último carácter que
ingresa es la barra de dividir(/), que indica que la palabra ha finalizado.
Escribir un programa que imprima la palabra en el orden que se ingresó y
en sentido inverso (por ejemplo: pera arep, la palabra podrá tener hasta 20
caracteres).*/

int main()
{
    char letra;
    char palabra[20];
    int i = 0;
    cout << "Ingrese una palabra: " << endl;
    do
    {
        cin >> letra;
        palabra[i] = letra;
        i++;
    } while (letra != '/');
    palabra[i] = '\0';
    cout << "La palabra es: " << palabra << endl;
    for (int j = i - 1; j >= 0; j--)
    {
        cout << palabra[j];
    }
    cout << endl;
    return 0;


}