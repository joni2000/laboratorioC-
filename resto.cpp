//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///UNA CASES DE COMIDAS VENDE EMPANADAS CON LA SIGUIENTE PROMOCION:
/// CADA DOCENA A $ 1000.
///CADA EMPANADA SUELTA A $100.
///HACER UN PROGRAMA PARA QUE DADA UNA CANTIDAD DE EMPANADAS SE INFORME EL IMPORTE DE LA VENTA

///15
///1300
/// 1 docena->1000
///3 sueltas->300
int main(){
    int sueltas, cantidad, docenas;
    float importe;
    const float DOCENA=1000, SUELTO=100;
    cout<<"INGRESE LA CANTIDAD DE EMPANADAS: ";
    cin>>cantidad;
    sueltas=cantidad%12;
    docenas=cantidad/12;
    importe=docenas*DOCENA+sueltas*SUELTO;
	cout<<"IMPORTE DE LA VENTA: $"<<importe;
	cout<<endl;
	system("pause");
	return 0;
}
