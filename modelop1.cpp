///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
/*
Una empresa de env�o de farmacia tiene un conjunto de registros con los datos del trabajo realizado durante los 30 d�as de abril
por sus repartidores.

Por cada uno de los repartidores y d�a trabajado registr� lo siguiente

N�mero de repartidor
D�a
Cantidad de env�os realizados
Importe total recaudado


Los datos est�n agrupados por n�mero de repartidor. No se sabe cu�ntos repartidores trabajaron;
los que lo hicieron trabajaron los 30 d�as del mes. Para indicar el fin de los datos se coloca un n�mero de repartidor igual a 0


Calcular e informar

a)       El repartidor que menos env�os hizo en todo el mes.

b)      La cantidad de repartidores que realizaron m�s de 150 env�os en todo el mes

c)       El importe total recaudado por todos los repartidores.

*/
using namespace std;


int main(){
    const int DIAS=3;
    int i, nroRepartidor, dia, cantidadEnvios;
    float importe;
    ///punto a
    bool primero=true;
    int menorRepartidor, menorCantidad, totalRepartidor;
    ///punto b
    int cantMas150=0;
    ///
    float importeTotal=0;
    cout<<"NUMERO DE REPARTIDOR: ";
    cin>>nroRepartidor;
    while(nroRepartidor!=0){
        totalRepartidor=0;
        for(i=1;i<=DIAS;i++){
            cout<<"DIA: ";
            cin>>dia;
            cout<<"CANTIDAD DE ENVIOS: ";
            cin>>cantidadEnvios;
            cout<<"IMPORTE: ";
            cin>>importe;
            ///punto a y b
            totalRepartidor+=cantidadEnvios;
            ///punto c
            importeTotal+=importe;
            }
        ///punto a
        if(primero==true){
            menorRepartidor=nroRepartidor;
            menorCantidad=totalRepartidor;
            primero=false;
        }
        else{
            if(totalRepartidor<menorCantidad){
                menorRepartidor=nroRepartidor;
                menorCantidad=totalRepartidor;
            }
        }
        ///punto b
        if(totalRepartidor>150){
            cantMas150++;
        }

        system("cls");
        cout<<"NUMERO DE REPARTIDOR: ";
        cin>>nroRepartidor;
    }
    ///punto a
    cout<<"EL REPARTIDOR QUE MENOS ENVIOS HIZO FUE "<<menorRepartidor<<endl;
	///punto b
	cout<<"LA CANTIDAD DE REPARTIDORES QUE HICIERON MAS DE 150 ENVIOS EN EL MES FUE DE "<<cantMas150<<endl;
	///punto c
	cout<<"EL IMPORTE TOTAL RECAUDADO FUE DE "<<importeTotal;
	cout<<endl;

	system("pause");
	return 0;
}
