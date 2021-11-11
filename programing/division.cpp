///Ejercicio: suma de 2 números
///Autor:DEK
///Fecha:06/08/2021
///Comentario:primer ejemplo del curso de Lab1.

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2;
    float resultado;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    resultado=1.0*n1/n2;
    cout<<"LA DIVISION ES: ";
    cout<<resultado;
	cout<<endl;
	system("pause");
	return 0;
}
