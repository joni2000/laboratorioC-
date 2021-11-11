//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float precioI, precioF;
    const float IVA=1.15;
    IVA=8;
    cout<<"INGRESE EL PRECIO: ";
    cin>>precioI;
    precioF=precioI*IVA;
    cout<<"PRECION FINAL: "<<precioF;
	cout<<endl;
	system("pause");
	return 0;
}
