#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

struct Empleados
{
    int dni;
    string nombre;
    string estadoCivil;
    string direccion;
    int telefono;
    char sexo[1];
    int edad;

};

void imprimirMenuEmpleados()
{
    cout << "1. Listado de empleados que estan proximos a jubilarse ordenados alfabeticomente" << endl;
    cout << "2. Edad promedio de los empleados" << endl;
    cout << "3. Datos totales del empleado (Ingrese su DNI)" << endl;
    cout << "Para salir pulse 0" << endl;
}

void listadoEmpleadosProximosAJubilarse(Empleados empleados[], int cantidad)
{
    int i;
    for (i = 0; i < cantidad; i++)
    {
        if (empleados[i].edad >= 65)
        {
            cout << "DNI: " << empleados[i].dni << endl;
            cout << "Nombre: " << empleados[i].nombre << endl;
            cout << "Estado Civil: " << empleados[i].estadoCivil << endl;
            cout << "Direccion: " << empleados[i].direccion << endl;
            cout << "Telefono: " << empleados[i].telefono << endl;
            cout << "Sexo: " << empleados[i].sexo << endl;
            cout << "Edad: " << empleados[i].edad << endl;
        }
    }
}

float edadPromedioEmpleados(Empleados empleados[], int cantidad)
{
    float edadPromedio = 0;
    for (int i = 0; i < cantidad; i++)
    {
        edadPromedio += empleados[i].edad;
    }
    edadPromedio = edadPromedio / cantidad;
    return edadPromedio;
}

void imprimirDatosEmpleado(Empleados empleados[], int cantidad)
{
    int dni;
    cout << "Ingrese su DNI: ";
    cin >> dni;
    for (int i = 0; i < cantidad; i++)
    {
        if (empleados[i].dni == dni)
        {
            cout << "DNI: " << empleados[i].dni << endl;
            cout << "Nombre: " << empleados[i].nombre << endl;
            cout << "Estado Civil: " << empleados[i].estadoCivil << endl;
            cout << "Direccion: " << empleados[i].direccion << endl;
            cout << "Telefono: " << empleados[i].telefono << endl;
            cout << "Sexo: " << empleados[i].sexo << endl;
            cout << "Edad: " << empleados[i].edad << endl;
        }
    }
}


int main()
{

    int dni = 0;

    Empleados vecEmpleados[25] = {
        {
            12345678,
            "Juan",
            "Soltero",
            "Av. Siempre Viva 123",
            123456789,
            'M',
            20
        },
        {
            98765432,
            "Pedra",
            "Casado",
            "Av Principal 123",
            123098645,
            'F',
            30
        },
        {
            147833112,
            "Juana",
            "Soltera",
            "Av. Algo 123",
            197346213,
            'F',
            65
        },
        {
            7645321,
            "Rocio",
            "Mancuerna",
            "Av. Siempre Viva 123",
            13213454,
            'F',
            28
        },
    };

    int lenEmpleados = 4;

    int opcion;

    imprimirMenuEmpleados();
    cin >> opcion;

    while (opcion != 0)
    {
        switch (opcion)
        {
            case 1:
                cout << "Listado de empleados que estan proximos a jubilarse ordenados alfabeticomente: " << endl;
                listadoEmpleadosProximosAJubilarse(vecEmpleados, lenEmpleados);
                break;
            case 2:
                cout << "Edad promedio de los empleados: " << endl;
                cout << edadPromedioEmpleados(vecEmpleados, lenEmpleados) << endl;
                break;
            case 3:
                cout << "Datos totales del empleado" << endl;
                imprimirDatosEmpleado(vecEmpleados, lenEmpleados);
                break;
        }
        cin >> opcion;
    }

    

}