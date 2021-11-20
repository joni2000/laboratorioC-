///autor: Jonathan Ibarrola

#include <iostream>
#include <cstdlib>

using namespace std;
#include "Funcione.h"
int main(){
    int opc;
    ///puntoA
    int vectorSede[40]={0};

    ///punto B
    int vectorTiempo[500]={0};

    /// punto C
    int vectorCodigos[20]={0};
        while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"1) CARGAR DATOS"<<endl;
        cout<<"2) PUNTO A"<<endl;
        cout<<"3) PUNTO B"<<endl;
        cout<<"4) PUNTO C"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"0) SALIR"<<endl<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");

        switch(opc){
            case 1: cargarInformacion(vectorSede, vectorTiempo, vectorCodigos);
                    break;
            case 2: puntoA(vectorSede);
                    break;
            case 3: puntoB(vectorTiempo);
                    break;
            case 4: puntoC(vectorCodigos);
                    break;
            case 0: return 0;
                    break;
        }
        system("pause");
    }
    cout<<endl;
    return 0;
}
