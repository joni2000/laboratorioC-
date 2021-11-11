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
    if(n1>n2){///proposición lógica: el resultado es un valor de verdad: verdadero o false . true false
        cout<<"n1 ES MAYOR QUE n2"<<endl;
        cout<<n1<<" ES MAYOR QUE "<<n2;
    }
    else{
        if(n1==n2){
            cout<<"n1 ES IGUAL QUE n2"<<endl;
            cout<<n1<<" ES IGUAL QUE "<<n2;
        }
        else{
            cout<<"n1 ES MENOR QUE n2"<<endl;
            cout<<n1<<" ES MENOR QUE "<<n2;
        }

    }
    cout<<endl;
	system("pause");
	return 0;
}
