///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    /*int n=5, resultado;
    resultado=(n>=8);
    cout<<"Valor variable resultado: "<<resultado;*/
    int n1, n2, n3, n4;
    int mayoresOiguales7=0, mayoresOiguales4=0;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n4;

    mayoresOiguales7=(n1>=7)+(n2>=7)+(n3>=7)+(n4>=7);
    cout<<"CANTIDAD MAYORES O IGUALES A 7: "<<mayoresOiguales7<<endl;

    mayoresOiguales4=(n1>=4)+(n2>=4)+(n3>=4)+(n4>=4);
    cout<<"CANTIDAD MAYORES O IGUALES A 4: "<<mayoresOiguales4<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
