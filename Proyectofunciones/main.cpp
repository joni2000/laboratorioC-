#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>

using namespace std;

#include "funciones.h"
#include "resolucionTP.h"

///NOMBRE DE UN VECTOR: es un puntero constante que contiene la dirección de inicio
///del vector

///PUNTERO: variable que contiene direcciones de memoria


int main(){
    int opc;
    while(true){
        system("cls");
        cout<<"---------------------"<<endl;
        cout<<"MENU TP DE FUNCIONES"<<endl;
        cout<<"1. EJERCICIO 1"<<endl;
        cout<<"2. EJERCICIO 2"<<endl;
        cout<<"3. EJERCICIO 3"<<endl;
        cout<<"4. CARGAR Y MOSTRAR CADENAS DE CARACTERES"<<endl;
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"OPCION ELEGIDA: "<<endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: punto1();
                    break;
            case 2: punto2();
                    break;
            case 3: punto3();
                    break;
            case 4: cadenas();
                    break;
            case 0: return 0;
                    break;
            default: cout<<"OPCION INCORRECTA"<<endl;
        }
        cout<<endl;
        system("pause");


    }
    return 0;
}
