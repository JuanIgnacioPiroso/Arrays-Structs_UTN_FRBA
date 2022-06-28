#include <iostream>
using namespace std;

/*  Confeccionar un subprograma que, dados dos vectores de números 
enteros liste el contenido de ambos pero en forma ordenada. Utilice el 
algoritmo de apareo. */

#include <iostream>
using namespace std;

int main () {

    int vecA[5]={1,5,7,10,12};
    int vecB[5]={2,4,11};
    int vecC[10];
    int lenA = 5;
    int lenB = 3;
    int lenC = 0;

    int posA = 0;
    int posB = 0;

    // APAREO CON VECTORES - MISMO ALGORITMO PARA LAS DIFERENTES ESTRUCTURAS
    while (posA < lenA && posB < lenB)
    {
        if (vecA[posA] < vecB[posB])
        {
            if (lenC == 0 || vecA[posA] != vecC[lenC-1])
            {
                vecC[lenC] = vecA[posA];
                lenC++;
            }
            posA++;
        }
        else
        {
            if (lenC == 0 || vecB[posB] != vecC[lenC-1])
            {
                vecC[lenC] = vecB[posB];
                lenC++;
            }
            posB++;
        }
    }

    while (posA < lenA)
    {
        if (lenC == 0 || vecA[posA] != vecC[lenC-1])
        {
            vecC[lenC] = vecA[posA];
            lenC++;
        }
        posA++;
    }

    while (posB < lenB)
    {
        if (lenC == 0 || vecB[posB] != vecC[lenC-1])
        {
            vecC[lenC] = vecB[posB];
            lenC++;
        }
        posB++;
    }

    for (int i = 0; i < lenC; i++)
    {
        cout << vecC[i] << endl;
    }

    // FIN DEL APAREO
    
    
    return 0;
}