///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Ej9 TP1
///Datos de entrada: 1 n�mero (cantidad de minutos)

///Salida: 2 n�meros
            ///cantidad de horas
            ///cantidad de minutos

///�C�mo transformar una cantidad de minutos en su equivalente de horas y minutos?

        ///1 Hora tiene 60 minutos
        ///Dada una cantidad de minutos �cu�ntas horas son?
            ///horas=minutos/60
            ///minutos2=minutos-horas*60

int main(){
    int tiempo;
    int horas, minutos;
    cout<<"INGRESAR LA CANTIDAD DE MINUTOS: ";
    cin>>tiempo;
    horas=tiempo/60;
    minutos=tiempo%60;
    cout<<"LA CANTIDAD DE HORAS EQUIVALENTES ES: "<<horas<<endl;
    cout<<"Y MINUTOS: "<<minutos;
	cout<<endl;
	system("pause");
	return 0;
}
