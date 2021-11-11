///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int vuelta;
    for(vuelta=1;vuelta<=20;vuelta=vuelta+3){
        cout<<vuelta<<endl;
        vuelta=vuelta-3;
    }
	cout<<endl;
	system("pause");
	return 0;
}
