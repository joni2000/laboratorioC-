#include <iostream>
#include <cstdlib>
#include <cstring>///string.h

using namespace std;
#include "funciones.h"


int main(){
    int opc;
    while(true){
        system("cls");
        cout<<"-------------------------------------------"<<endl;
        cout<<"1. TRABAJO CON UNA CADENA DE CARACTERES"<<endl;
        cout<<"2. TRABAJO CON VARIAS CADENAS DE CARACTERES"<<endl;
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: unaCadena();
                    break;
            case 2: variasCadenas();
                    break;
            case 0: cout<<"GRACIAS POR USAR NUESTRO PROGRAMA :-) ";
                    return 0;
                    break;
            default: cout<<"NUMERO INCORRECTO"<<endl;
        }
        system("pause");
    }
    return 0;
}
