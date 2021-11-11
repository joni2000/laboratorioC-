///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Mostrar la suma de los positivos, la suma de los negativos y la cantidad de ceros

int main(){
    int i, n;
    const int VUELTAS=5;
    int acumuladorPositivos,acumuladorNegativos, contadorCeros;

    acumuladorPositivos=acumuladorNegativos=contadorCeros=0;

    for(i=1;i<=VUELTAS;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>n;
        if(n>0){
            ///acumuladorPositivos+=acumuladorPositivos+n;
            acumuladorPositivos+=n;
        }
        else{
            if(n==0){
                contadorCeros=contadorCeros+1;
            }
            else{
                acumuladorNegativos=acumuladorNegativos+n;
            }
        }

    }
    cout<<"SUMA DE POSITIVOS: "<<acumuladorPositivos<<endl;
    cout<<"CANTIDAD DE CEROS: "<<contadorCeros<<endl;
    cout<<"SUMA DE NEGATIVOS: "<<acumuladorNegativos<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
