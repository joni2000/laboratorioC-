///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Datos entrada
        ///Fecha de nacimiento: día, mes y año (diaN, mesN, anioN)
        ///Fecha actual: dia, mes y año.(diaA, mesA, anioA)
///Cantidad de años de una persona

///20/08/2001-> 19
///13/08/2001->20

int main(){
    int diaN, mesN, anioN;
    int diaA, mesA, anioA;
    int edad;
    cout<<"INGRESE LA FECHA DE NACIMIENTO:(DIA, MES, ANIO) ";
    cin>>diaN;
    cin>>mesN;
    cin>>anioN;
    cout<<"INGRESE LA FECHA ACTUAL:(DIA, MES, ANIO) ";
    cin>>diaA;
    cin>>mesA;
    cin>>anioA;
    edad=anioA-anioN;
    if(mesN>mesA){
        edad=edad-1;
    }
    else{
        if(mesN==mesA && diaN>diaA){
             edad=edad-1;
            }
    }
    cout<<"LA EDAD ES DE: "<<edad;
	cout<<endl;
	system("pause");
	return 0;
}
