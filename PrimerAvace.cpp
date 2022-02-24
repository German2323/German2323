#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int a, b, e;

int main()
{

   char Nombre[100];
   char Hora [24];
   char Tratamiento [25];
   char Descripcion [1];
   char Precio[12];
   char Cantidad[7];
   char PrecioU[15];
   char Total[20];


    int i=1;
    
    do {
    cout << "\n\n///////////////ASISTENTE DE CITA DENTAL///////////////" << endl;
    cout << "¿Que procedimiento desea realizar? (Eliga un numero)" << endl;
    cout << endl;
    cout << "1.-Agendar Cita" << endl;
    cout << "2.-Modificar Cita" << endl;
    cout << "3.-Eliminar Cita" << endl;
    cout << "4.-Lista De Citas Vigentes" << endl;
    cout << "5.-Limpiar pantalla" << endl;
    cout << "0.-Salir"<< endl;
    cout << endl;

    cin >> a;

    switch (a){


        case 1:
        cout << endl;
        cout << "Favor de llenar la siguiente informacion" << endl;
        cout << "Nombre Completo:" << endl;
        cin >> Nombre;
        cout << "Hora Del Tratamiento:" << endl;
        cin >> Hora;
        cout << "Nombre Del Tratamiento:" << endl;
        cin >> Tratamiento;
        cout << "Descripcion Del Tratamiento:" << endl;
        cin >> Descripcion;
        cout << "Precio Del Tratamiento:" << endl;
        cin >> Precio;
        cout << "Cantidad De Veces Que Desea Tomar Este Tratamiento:" << endl;
        cin >> Cantidad; 
        cout << "Precio Unitario:" << endl;
        cin >> PrecioU;
        cout << "Total:" << endl;
        cin >> Total;
        break;
        
        case 2:
        cout << endl;
        cout << "Modificar Cita" << endl;
        break; 
        
        case 3:
        cout << endl;
        cout << "Eliminar Cita" << endl;
        break; 
        
        case 4:
        cout << endl;
        cout << "Lista De Citas Vigentes" << endl;
        break; 
        
        case 5:
        cout << endl;
        cout << "Limpiar pantalla" << endl;
        break; 
        
        case 0:
        cout << endl;
        cout << "Adios y Buena Suerte!!!" << endl;
        exit(EXIT_SUCCESS);
        break;

        default:
        cout << endl;
        cout << "Esta Opcion No Es Valida" << endl;
        break;

    }   
        cout << endl;
        cout << "¿Desea Volver Al Menu Principal" << endl;
		cout << "1.- Si" << endl;
		cout << "2.- No" << endl;
		cin >> e;
        
    } while(e == 1);
}   