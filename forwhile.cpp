///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, j;

    for(j=1;j<=2;j++){
        cout<<"VALOR DE j DEL for EXTERNO: "<<j<<endl;///SE EJECUTA 2
        cout<<"NUMERO: ";
        cin>>num;
        while(num!=0){
            cout<<"VALOR DE num DEL while INTERNO: "<<num<<"\t";///SE EJECUTA 2*????-> indeterminado
            cout<<"NUMERO: ";
            cin>>num;
        }
        cout<<endl;
    }

	cout<<endl;
	system("pause");
	return 0;
}
