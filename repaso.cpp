///Ejercicio: repaso de primera clase
///Autor:DEK
///Fecha:09/0/2021
///Comentario: repaso de lo visto en la primera clase

# include<iostream>
# include<cstdlib>

using namespace std;

///Sumar dos números
///Datos de entrada: dos números enteros
///Salida: un número.
///Cómo convertir la entrada en la salida
///Operación matématica de suma de los dos valores ingresados
int main(){
    int n1, n2, suma;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    suma=n1+n2;
	cout<<"LA SUMA ES: "<<suma<<endl<<endl;
	system("pause");
	return 0;
}
