#include <iostream>
#include <cstdlib>

using namespace std;

#include "funciones.h"

int main(){
    int opc;
    ///punto a
    int mRegionProducto[5][5]={0};
    ///punto b
    int vPampa[5]={0};
    ///punto c
    int vKilos[5]={0};
    ///punto d
    int vVentas[5]={0};
    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"1) CARGAR INFORMACION"<<endl;
        cout<<"2) PUNTO A"<<endl;
        cout<<"3) PUNTO B"<<endl;
        cout<<"4) PUNTO C"<<endl;
        cout<<"5) PUNTO D"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"0) SALIR"<<endl<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarInformacion(vPampa, vKilos, vVentas, mRegionProducto);
                    break;
            case 2: puntoA(mRegionProducto);
                    break;
            case 3: puntoB(vPampa);
                    break;
            case 4: puntoC(vKilos);
                    break;
            case 5: puntoD(vVentas);
                    break;
            case 0: return 0;
                    break;

        }
        system("pause");
    }
    cout <<endl;
    return 0;
}
