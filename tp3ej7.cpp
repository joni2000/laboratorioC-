///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, n;
    const int VUELTAS=5;
    int contadorPositivos,contadorNegativos, contadorCeros;

    contadorPositivos=contadorNegativos=contadorCeros=0;
    for(i=1;i<=VUELTAS;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>n;

        if(n>0){
            contadorPositivos++;
        }
        else{
            if(n==0){
                contadorCeros++;
            }
            else{
                contadorNegativos++;
            }
        }

    }
    cout<<"CANTIDAD DE POSITIVOS: "<<contadorPositivos<<endl;
    cout<<"CANTIDAD DE CEROS: "<<contadorCeros<<endl;
    cout<<"CANTIDAD DE NEGATIVOS: "<<contadorNegativos<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
