///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
///dos n�meros consecutivos iguales

///y luego informar el m�ximo. Cuando se ingresa el
///n�mero repetido el mismo debe ser descartado.


int main(){
    bool seguir=true;
    int num, anterior, maximo;
    cout<<"NUMERO: ";
    cin>>num;
    maximo=num;
    while(seguir==true){
        anterior=num;
        cout<<"NUMERO: ";
        cin>>num;

        if(num>maximo){
            maximo=num;
        }

        if(anterior==num){
            seguir=false;
        }
    }
	cout<<"EL MAXIMO VALOR INGRESADO FUE: "<<maximo;
	cout<<endl;
	system("pause");
	return 0;
}
