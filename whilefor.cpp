///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, j;
    cout<<"NUMERO: ";
    cin>>num;
    while(num!=0){
        cout<<"VALOR DE num DEL while EXTERNO: "<<num<<endl;///SE EJECUTA ???
        for(j=1;j<=3;j++){
            cout<<"VALOR DE j DEL FOR INTERNO: "<<j<<"\t";///SE EJECUTA 3*????-> indeterminado
        }
        cout<<endl;
        cout<<"NUMERO: ";
        cin>>num;
    }

	cout<<endl;
	system("pause");
	return 0;
}
