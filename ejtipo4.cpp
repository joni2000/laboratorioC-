///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, codigoProvincia, codigoProducto;

    for(i=1;i<=5;i++){
        cout<<"PROVINCIA: ";
        cin>>codigoProvincia;
        cout<<"PRODUCTO: ";
        cin>>codigoProducto;
        while(codigoProducto>0){
            ///ingreso del resto de las entradas
            cout<<"PROVINCIA: ";
            cin>>codigoProvincia;
            cout<<"PRODUCTO: ";
            cin>>codigoProducto;
        }
        cout<<"PUNTO A";
    }
    cout<<"PUNTO B";
    cout<<"PUNTO C";
	cout<<endl;
	system("pause");
	return 0;
}
