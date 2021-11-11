///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int anio;
    cout<<"INGRESE UN ANIO: ";
    cin>>anio;
    if(anio%4==0){
        if(anio%100==0){
            if(anio%400!=0){
                cout<<"NO ES BISIESTO";
            }
            else{
                cout<<"ES BISIESTO";
            }
        }
        else{
            cout<<"ES BISIESTO";
        }
    }
    else{
        cout<<"NO ES BISIESTO";
    }
	cout<<endl;
	system("pause");
	return 0;
}
