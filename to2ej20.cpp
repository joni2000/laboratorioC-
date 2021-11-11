///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int horasTrabajadas, cantidadHasta40, cantidadEntre41y50, cantidadMasde50, sueldo;
    cout<<"INGRESE LA CANTIDAD DE HORAS TRABAJADAS: ";
    cin>>horasTrabajadas;
	if(horasTrabajadas>50){
        cantidadHasta40=40;
        cantidadEntre41y50=10;
        cantidadMasde50=horasTrabajadas-50;
	}
	else{
        cantidadMasde50=0;
        if(horasTrabajadas>40){
            cantidadHasta40=40;
            cantidadEntre41y50=horasTrabajadas-40;
        }
        else{
            cantidadEntre41y50=0;
            cantidadHasta40=horasTrabajadas;
        }
	}
	sueldo=cantidadHasta40*300+cantidadEntre41y50*450+cantidadMasde50*600;
    cout<<"EL SUELDO DE LA SEMANA ES: "<<sueldo;
	cout<<endl;
	system("pause");
	return 0;
}
