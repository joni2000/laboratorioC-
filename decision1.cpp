//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///TP1: secuencia-> determina el orden de ejecución de las instrucciones

int main(){
    int n1, n2, n3;
    cout<<"INGRESE 3 NUMEROS: ";
    cin>>n1;
    cin>>n2;
    cin>>n3;
    if(n1>n2&&n1>n3){
            cout<<"n1 es el mayor";

    }
    else{
        if(n2>n3){
            cout<<"n2 es el mayor";
        }
        else{
            cout<<"n3 es el mayor";
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
