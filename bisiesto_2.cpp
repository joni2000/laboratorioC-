///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;





int main(){
    int anio;
    bool bisiesto=false;
    cout<<"INGRESE UN ANIO: ";
    cin>>anio;
    if(anio%4==0){
        bisiesto=true;
        if(anio%100==0){
            bisiesto=false;
            if(anio%400==0){
                bisiesto=true;
            }
        }
    }

    if(bisiesto==true){
        cout<<"ES BISIESTO";
    }
    else{
        cout<<"NO ES BISIESTO"<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
