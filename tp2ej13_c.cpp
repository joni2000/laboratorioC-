///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3;
    int primero, segundo, tercero;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;
    if(n1<n2 && n1<n3){
        primero=n1;
        if(n2<n3){
            segundo=n2;
            tercero=n3;
        }
        else{
            segundo=n3;
            tercero=n2;
        }
    }


    if(n2<n1 && n2<n3){
        primero=n2;
        if(n1<n3){
            segundo=n1;
            tercero=n3;
        }
        else{
            segundo=n3;
            tercero=n1;
        }
    }

    if(n3<n1 && n3<n2){
        primero=n3;
        if(n1<n2){
            segundo=n1;
            tercero=n2;
        }
        else{
            segundo=n2;
            tercero=n1;
        }
    }

    cout<<primero<<"\t"<<segundo<<"\t"<<tercero;
	cout<<endl;
	system("pause");
	return 0;
}
