///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*
13) Hacer un programa para ingresar tres números distintos y
listarlos ordenados de menor a mayor.
Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.
*/

int main(){
    int n1, n2, n3;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;

    if(n1<n2 && n1<n3){
        if(n2<n3) cout<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
        else cout<<n1<<"\t"<<n3<<"\t"<<n2<<endl;
    }
    else if(n2<n3){
            if(n1<n3) cout<<n2<<"\t"<<n1<<"\t"<<n3<<endl;
            else cout<<n2<<"\t"<<n3<<"\t"<<n1<<endl;
        }
        else    if(n1<n2)cout<<n3<<"\t"<<n1<<"\t"<<n2<<endl;
                else cout<<n3<<"\t"<<n2<<"\t"<<n1<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
