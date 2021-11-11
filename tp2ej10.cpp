///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

#include<iostream>
#include<cstdlib>

using namespace std;

int main (){
    int n1,n2,n3,n4,n5,menor,mayor;
    cout<<"Ingrese un numero ";
    cin>>n1;
    cout<<"Ingrese un numero ";
    cin>>n2;
    cout<<"Ingrese un numero ";
    cin>>n3;
    cout<<"Ingrese un numero ";
    cin>>n4;
    cout<<"Ingrese un numero ";
    cin>>n5;
    mayor=n1;
    menor=n1;
    if(n2>mayor){
        mayor=n2;
    }
    else{
        if(n2<menor){
            menor=n2;
        }
    }
    if(n3>mayor){
        mayor=n3;
    }
    else{
        if(n3<menor){
            menor=n3;
        }
    }
    if(n4>mayor){
        mayor=n4;
    }
    else{
        if(n4<menor){
            menor=n4;
        }
    }
    if(n5>mayor){
        mayor=n5;
    }
    else{
        if(n5<menor){
            menor=n5;
        }
    }
    cout<<endl;
    cout<<"El menor es "<<menor;
    cout<<endl;
     cout<<"El mayor es: "<<mayor;
    cout<<endl;
    system ("pause");
    return 0;
}
