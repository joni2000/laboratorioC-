///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Datos de entrada: 2 n�meros

///Salida: 1 n�mero, que se obtiene de calcular la DIFERENCIA ABSOLUTA entre ambos
///DEFINIR DIFERENCIA ABSOLUTA: distancia entre los dos n�meros sin signo

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
