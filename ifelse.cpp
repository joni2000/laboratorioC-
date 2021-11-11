///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"mayor: "<<n1;
    }
    else if(n2>n3){
        cout<<"mayor: "<<n2;
        }
        else{
            cout<<"mayor: "<<n3;
        }
	cout<<endl;
	system("pause");
	return 0;
}
