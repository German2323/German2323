#include <iostream>
#include <cstdlib>

using namespace std;

int a;

int main()
{
    
   char Nombre[100];
   char Hora [24];
   char Tratamiento [25];
   char Descripcion [1];
   char Precio[12];
   char Cantidad[7];
   char PrecioU[15];
    
    
    int i=1;
    
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
    cout << "¿Que tipo de cita le gustaria agendar?" << endl;
    cout << "1.-Limpiesa Dental" << endl;
    cout << "2.-Resina Dental" << endl;
    cout << "3.-Coronas" << endl;
    cout << "4.-Regresar a la pantalla anterior" << endl;
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
return 0;    
}   
