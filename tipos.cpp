///Ejercicio: tipos de dato
///Autor:DEK
///Fecha:09/0/2021
///Comentario: repaso de lo visto en la primera clase

# include<iostream>
# include<cstdlib>

using namespace std;

int main(){
    int n1;///entero: almacena números enteros
    cout<<"INGRESE UN NUMERO ENTERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO CON COMA: ";
    float n2; ///alamacena números reales, con coma.
    cin>>n2;
    cout<<n1<<endl;
    cout<<n2<<endl;
    char c1;///almacena un caracter
    cout<<"INGRESE UN CARACTER: ";
    cin>>c1;
    cout<<c1;

    c1='a';
    cout<<c1<<endl<<endl;
    bool var;
    var=false;
    cout<<var<<endl;
	system("pause");
	return 0;
}
