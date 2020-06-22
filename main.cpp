#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// defino clase Persona
class Persona{
    public:
        // defino variables de persona
        string nombre;
        string apellido;
        int edad;
        char sexo[1];
    public:
        // constructor persona
        Persona(){
            // ingreso nombre
            cout << "Nombre: ";
            cin >> nombre;
            // paso a mayusculas nombre
            for (int i = 0; i < nombre.length(); i++)
            {
                nombre[i] = toupper(nombre[i]);    
            }
            
            // ingreso apellido
            cout << "Apellido: ";
            cin >> apellido;
            // paso a mayusuculas apellido
            for (int i = 0; i < apellido.length(); i++)
            {
                apellido[i] = toupper(apellido[i]);    
            }

            // ingreso edad
            cout << "Edad: ";
            cin >> edad;
            // compruebo edad>0
            if (edad<0)
                {
                cout << "Edad incorrecta" << endl;
                cout << "===============================" << endl;
                exit(-1);
            }
            
            // ingreso sexo
            cout << "Sexo: ";
            cin >> sexo;
            // paso a mayusuculas sexo
            sexo[0] = toupper(sexo[0]);
            
        }

   
};
// defino clase Salas
class Sala{
    public:
        int numeroDeSala;
        int numeroDeCama;
        float cargosDiarios;
        // constructor
        Sala(){
            cout << "Número de sala: ";
            cin >> numeroDeSala;
            cout << "Número de cama: ";
            cin >> numeroDeCama;
            cout << "Cargos diarios: ";
            cin >> cargosDiarios;
        } 
        // metodo para modificar valores de Sala
        void modificacionSala(){
            cout << "Número de sala: ";
            cin >> numeroDeSala;
            cout << "Número de cama: ";
            cin >> numeroDeCama;
            cout << "Cargos diarios: ";
            cin >> cargosDiarios;
        } 
};
// defino clase Internacion
class Internacion{
    public:
        Persona paciente;
        Sala salaPaciente;
        int cantidadDeDias;
        float costoTotal;
        // Constructor
        Internacion(){
            cout << "Cantidad de dias de internación: ";
            cin >> cantidadDeDias;
            costoTotal = cantidadDeDias * salaPaciente.cargosDiarios;
            cout << "===============================" << endl;
            
        }
        // metodo para visualizar elementos de la clase
        void view(){
            cout << "===============================" << endl;
            cout << "Nombre: " << paciente.nombre << endl;
            
            cout << "Apellido: " << paciente.apellido << endl;

            cout << "Edad: " << paciente.edad << endl;
            
            cout << "Sexo: " << paciente.sexo << endl;
            
            cout << "Número de sala: " << salaPaciente.numeroDeSala << endl;
            
            cout << "Número de cama: " << salaPaciente.numeroDeCama << endl;
            
            cout << "Costo diario: " << salaPaciente.cargosDiarios << endl;

            cout << "cantidad de dias: " << cantidadDeDias << endl;
            
            cout << "costo total: " << costoTotal << endl;
                
            cout << "===============================" << endl;
               
        }
        //  set dias de internacion y calculo nuevamnete costo totals
        void setDias(){
            cout << "Cantidad de dias de internación: ";
            cin >> cantidadDeDias;
            costoTotal = cantidadDeDias * salaPaciente.cargosDiarios;
            cout << "===============================" << endl;
        }
};

   
int main(){
    int opcion = -1;
    int cantidad = 0;
    int paciente =0;
    //  solicita cantidad de pacientes a ingresar
    cout << "Ingrese la cantidad de pacientes " << endl;
    cin>> cantidad;
    // defino arreglo para internaciones
    Internacion arreglo[cantidad];
    cout << "                    " << endl;
   //Menu
    while (opcion != 0)
    {
        cout << "Ingrese la opción deseada. " << endl;
        cout << "\t1-Modificar cantidad de dias. " << endl;
        cout << "\t2-Modificar sala/cama/cargos diarios. " << endl;
        cout << "\t3-Ver lista de pacientes. " << endl;
        cout << "\t0-Salir " << endl;
        cin>> opcion;
        switch (opcion)
        {
            // Modifica cantidad de dias
        case 1:
            cout << "Ingrese numero de paciente: " << endl;
            cin >> paciente;
            if (paciente <= cantidad)
            {
                arreglo[paciente].setDias();
                arreglo[paciente].view();
                break;
            }else
            {   cout << "===============================" << endl;
                cout << "Numero de paciente incorrecto " << endl;
                cout << "===============================" << endl;
                break;
            }
            
            
            // Modificar sala/cama/cargos diarios
        case 2:
            cout << "Ingrese numero de paciente: " << endl;
            cin >> paciente;
            
            if (paciente <= cantidad)
            {
            arreglo[paciente].salaPaciente.modificacionSala();
            arreglo[paciente].costoTotal = arreglo[paciente].cantidadDeDias * arreglo[paciente].salaPaciente.cargosDiarios;
            arreglo[paciente].view();
            break;
            }else
            {
                cout << "===============================" << endl;
                cout << "Numero de paciente incorrecto " << endl;
                cout << "===============================" << endl;
                break;
            }
            // lista todos los pacientes
        case 3:
            for (int i = 0; i < cantidad; i++)
            {
                cout<< "Paciente "<< i << endl;
                arreglo[paciente].view();    /* code */
            }
            
            
           break;
        
        }
    }

    return 0;
    
}