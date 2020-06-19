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

       void view(){
           cout << "===============================" << endl;
            cout << "Nombre: " << nombre << endl;
            
            cout << "Apellido: " << apellido << endl;

            cout << "Edad: " << edad << endl;
            
            cout << "Sexo: " << sexo << endl;
            
            cout << "===============================" << endl;
             
        }
};
// defino clase Salas
class Salas{
    public:
        int numeroDeSala;
        int numeroDeCama;
        float cargosDiarios;

        Salas(){
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
        int cantidadDeDias;
        float costoTotal;

};
int main(){
    cout << "Hola mundo " << endl;
    
    Persona person_1;
    person_1.view();

    // cin.ignore();
    // cin.get();

    return 0;
    
}