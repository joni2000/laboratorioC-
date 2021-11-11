///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int a,b, aux;
    cout<<"INGRESE UN NUMERO PARA LA VARIABLE a: ";
    cin>>a;
    cout<<"INGRESE UN NUMERO PARA LA VARIABLE b: ";
    cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<"VALOR DE LA VARIABLE a: "<<a<<endl;
    cout<<"VALOR DE LA VARIABLE b: "<<b;
	cout<<endl;
	system("pause");
	return 0;
}
