#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

struct Alumno
{
    char nombre[25];
    char tipoDocumento[10];
    int numeroDocumento;
    int numeroLegajo;
    float nota;
};

int estudianteMenorNota(Alumno vec[], int len)
{

    int posMin;
    int min = 9999;

    for (int i = 0; i < len; i++)
    {
        if (vec[i].nota < min)
        {

            min = vec[i].nota;
            posMin = i;
        }
    }

    return posMin;
}

int main()
{
    char nombrePeorNota[25];
    int lenAlumnosPromedioMayorSiete = 0;
    float promedioNotas = 0;
    float promedioNotasTotal = 0;
    int contador = 0;
    Alumno vecAlumnos[20];
    Alumno vecAlumnosPromedioMayorSiete[lenAlumnosPromedioMayorSiete];

    for (int lenAlumno = 0; lenAlumno < 3; lenAlumno++)
    {
        cout << "Ingrese el numero de legajo del alumno: " << endl;
        cin >> vecAlumnos[lenAlumno].numeroLegajo;
        cout << "Ingrese el nombre del alumno: " << endl;
        cin >> vecAlumnos[lenAlumno].nombre;
        cout << "Ingrese el tipo de documento del alumno: " << endl;
        cin >> vecAlumnos[lenAlumno].tipoDocumento;
        cout << "Ingrese el numero de documento del alumno: " << endl;
        cin >> vecAlumnos[lenAlumno].numeroDocumento;
        cout << "Ingrese la nota del alumno: " << endl;
        cin >> vecAlumnos[lenAlumno].nota;

        if (vecAlumnos[lenAlumno].nota >= 7)
        {
            vecAlumnosPromedioMayorSiete[lenAlumnosPromedioMayorSiete] = vecAlumnos[lenAlumno];
            lenAlumnosPromedioMayorSiete++;
        }

        promedioNotasTotal += vecAlumnos[lenAlumno].nota;
        contador++;
    }

    promedioNotas = promedioNotasTotal / contador;

    cout << "----------------------------------------------------------------------- " << endl;
    
    cout << "El promedio de notas es: " << promedioNotas << endl;

    cout << "----------------------------------------------------------------------- " << endl;

    for (int i = 0; i < lenAlumnosPromedioMayorSiete; i++)
    {
        cout << "-----------ALUMNOS CON PROMEDIO MAYOR A 7----------------" << endl;
        cout << "Nombre: " << vecAlumnosPromedioMayorSiete[i].nombre << endl;
        cout << "Tipo de documento: " << vecAlumnosPromedioMayorSiete[i].tipoDocumento << endl;
        cout << "Numero de documento: " << vecAlumnosPromedioMayorSiete[i].numeroDocumento << endl;
        cout << "Numero de legajo: " << vecAlumnosPromedioMayorSiete[i].numeroLegajo << endl;
    }

    int posMin = estudianteMenorNota(vecAlumnos, 3);

    cout << "----------------------------------------------------------------------- " << endl;

    cout << "El alumno con menor nota es: " << vecAlumnos[posMin].nombre << endl; // ¿Por qué no funciona?

    return 0;
}