///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

int main(){
    int sueltos, cajas, importe, cantidad;
    cout<<"INGRESE LA CANTIDAD DE ALFAJORES: ";
    cin>>cantidad;
    sueltos=cantidad%12;
    cajas=cantidad/12;
    importe=sueltos*100+cajas*1000;
    cout<<"EL IMPORTE DE LA VENTA ES: "<<importe<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
