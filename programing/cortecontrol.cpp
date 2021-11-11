///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int numE, numAnterior;
    cout<<"NUMERO PARA EL WHILE EXTERNO: ";
    cin>>numE;
    while(numE!=0){
        numAnterior=numE;
    ///
        while(numE==numAnterior){
            cout<<"interno"<<endl;
            cin>>numE;
            ///
        }
        cout<<"CAMBIO DE WHILE. ESTAMOS EN EL EXTERNO"<<endl;
        ///
    }

	cout<<endl;
	system("pause");
	return 0;
}
