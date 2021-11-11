///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, n, maximo;
    for(i=1;i<=5;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>n;
        if(i==1){
            maximo=n;
        }
        else{
            if(n>maximo){
                maximo=n;
            }
        }
    }
	cout<<"EL VALOR MAXIMO ES: "<< maximo;
	cout<<endl;
	system("pause");
	return 0;
}
