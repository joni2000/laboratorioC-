//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int importe;
    int cantidadMil, cantidadQuinientos, cantidadDoscientos, cantidadCien;
    cout<<"INGRESE EL DINERO A RETIRAR: ";
    cin>>importe;
    cantidadMil=importe/1000;

    importe=importe-1000*cantidadMil;
    cantidadQuinientos=importe/500;


	importe=importe-500*cantidadQuinientos;
    cantidadDoscientos=importe/200;


    importe=importe-200*cantidadDoscientos;
    cantidadCien=importe/100;


    if(cantidadMil>0){
        cout<<"CANTIDAD DE BILLETES DE 1000 "<<cantidadMil<<endl;
    }
    if(cantidadQuinientos>0){
        cout<<"CANTIDAD DE BILLETES DE 500 "<<cantidadQuinientos<<endl;
    }
    if(cantidadDoscientos>0){
        cout<<"CANTIDAD DE BILLETES DE 200 "<<cantidadDoscientos<<endl;
    }
    if(cantidadCien>0){
        cout<<"CANTIDAD DE BILLETES DE 100 "<<cantidadCien;
    }

	cout<<endl;
	system("pause");
	return 0;
}
