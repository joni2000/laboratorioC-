///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int numE, numI;
    cout<<"NUMERO PARA EL WHILE EXTERNO: ";
    cin>>numE;
    while(numE!=0){
        cout<<"NUMERO PARA EL WHILE INTERNO: ";
        cin>>numI;
        while(numI!=0){
            cout<<"interno"<<endl;
            cout<<"NUMERO PARA EL WHILE INTERNO: ";
            cin>>numI;
        }
        cout<<"externo"<<endl;
        cout<<"NUMERO PARA EL WHILE EXTERNO: ";
        cin>>numE;
        cout<<endl;
    }

	cout<<endl;
	system("pause");
	return 0;
}
