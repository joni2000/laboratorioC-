///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, j;
    for(i=1;i<=5;i++){
        cout<<"VALOR DE i DEL FOR EXTERNO: "<<i<<endl;///SE EJECUTA 5
        for(j=1;j<=3;j++){
            cout<<"VALOR DE j DEL FOR INTERNO: "<<j<<"\t";///SE EJECUTA 3*5->15
        }
        cout<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
