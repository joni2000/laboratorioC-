#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

#include "funciones.h"

int main(){
    int opc;
    int dados[5], suma;
    while(true){
        system("cls");
        cout<<"-------------------------"<<endl;
        cout<<"1. Tirar dados"<<endl;
        cout<<"2. Mostrar la suma de todos los dados"<<endl;
        cout<<"0. Fin del programa"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"INGRESAR OPCI0N: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarAleatorio(dados,5,6);
                    mostrarVector(dados, 5);
                    break;
            case 2: suma=sumarVector(dados,5);
                    cout<<"LA SUMA DE LOS DADOS ES: "<<suma<<endl;
                    break;
            case 0: return 0;
                    break;
        }
        system("pause>null");
    }
    return 0;
}
