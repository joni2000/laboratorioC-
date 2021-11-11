///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int CARTEROS=2, DIAS=3;
    ///ENTRADA
    int nroCartero, dia, cantidadEnvios;
    float importe;
    int i, j;
    ///punto a
    float promedio, importeCartero;
    int totalEnviosCartero;
    ///punto b
    int menorCartero, menorCantidadEnvios;
    bool primero=true;
    ///punto C
    float importeTotal=0;

    for(i=1;i<=CARTEROS;i++){
        system("cls");
        totalEnviosCartero=0;
        importeCartero=0;
        cout<<"NUMERO DE CARTERO: ";
        cin>>nroCartero;
        for(j=1;j<=DIAS; j++){
                cout<<"DIA: ";
                cin>>dia;
                cout<<"CANTIDAD DE ENVIOS: ";
                cin>>cantidadEnvios;
                cout<<" IMPORTE: ";
                cin>>importe;
                ///punto a
                totalEnviosCartero+=cantidadEnvios;
                importeCartero+=importe;
        }
        system("cls");
        ///punto a
        promedio=importeCartero/totalEnviosCartero;
        cout<<"EL CARTERO "<<nroCartero<<" TUVO UN PROMEDIO DE: "<<promedio<<endl;
        system("pause");
        ///punto b
        if(primero==true){
            menorCartero=nroCartero;
            menorCantidadEnvios=totalEnviosCartero;
            primero=false;
        }
        else{
            if(totalEnviosCartero<menorCantidadEnvios){
                menorCartero=nroCartero;
                menorCantidadEnvios=totalEnviosCartero;
            }
        }
        importeTotal+=importeCartero;
    }
	///punto b
	cout<<"EL NUMERO DE CARTERO QUE MENOS ENVIOS HIZO "<<menorCartero<<endl;
	///punto c
	cout<<"LA RECAUDACION TOTAL FUE DE: "<<importeTotal<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
