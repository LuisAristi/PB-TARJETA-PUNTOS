#include <iostream>

using namespace std;

struct Cliente {
    long id;
    char nombre[100];
    char direccion[100];
    long telefono;
    int puntosVigentes;
    int puntosRedimidos;
    long fechaRedencion;
    long fechaAsignados;
};

void mostrarMenu() {
    cout << "¡Bienvenido al programa!\n";
    cout << "========================\n";
    cout << "1. Registrar cliente.\n";
    cout << "2. Ingresar puntos.\n";
    cout << "3. Consultar Puntos.\n";
    cout << "4. Consultar clientes.\n";
    cout << "5. Comprar textil usando puntos.\n";
    cout << "6. Comprar electrodomesticos usando puntos.\n";
    cout << "7. Comprar mercado usando puntos\n";
    cout << "8. Eliminar Clientes\n";
    cout << "9. Salir\n";
    cout << "========================\n";
    cout << "Ingrese el número de la opción deseada: ";
}

void registrarCliente() {
    
}
