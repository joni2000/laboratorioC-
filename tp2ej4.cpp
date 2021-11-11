///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Datos de entrada: 2 números

///Salida: 1 número, que se obtiene de calcular la DIFERENCIA ABSOLUTA entre ambos
///DEFINIR DIFERENCIA ABSOLUTA: distancia entre los dos números sin signo

int main(){
    int n1, n2, resta;

    cout<<"NUMERO: ";
    cin>>n1;
    cout<<"NUMERO: ";
    cin>>n2;
    if(n1>n2){
        resta=n1-n2;
    }
    else{
        resta=n2-n1;
    }
	cout<<"DIFERENCIA ABSOLUTA: "<<resta<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
