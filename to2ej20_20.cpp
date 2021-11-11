///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///REHACER EL EJERCICIO DE MANERA TAL QUE ME PERMITA HACER EL CALCULO PARA 20 EMPLEADOS.
///EL PROGRAMA DEBE PEDIR LA CANTIDAD DE HORAS TRABAJADAS POR UN EMPLEADO, E INMEDIATAMENTE EMITIR EL SUELDO
int main(){
    int horasTrabajadas, cantidadHasta40, cantidadEntre41y50, cantidadMasde50, sueldo;
    int i;
    const int VUELTAS=20;
    for(i=1;i<=VUELTAS;i++){
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
        system("cls");
        cout<<"valor de i adentro del for: "<<i;
    }
    cout<<"valor de i fuera del for: "<<i<<endl;
	return 0;
}

/*
for(i=1;i<=3;i++){

        i=1;-> le asigna un valor inicial a la variable i

        i<=3-> en cada vuelta del for se analiza la condición. Si es verdadera continúa la repetición.
        Cuando se hace falsa termina el ciclo

        i++-> incremento de la variable que controla el ciclo. Con cada "vuelta" se produce el incremento
        i=i+1

        i=i+2

        */
