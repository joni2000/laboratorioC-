///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///a) El código de paciente con la consulta de menor valor para el estudio con código 2. Indicar también la edad del paciente.
///La cantidad de turnos en la que pacientes de más de 60 años hayan abonado menos de $50 el valor de la consulta
///Por cada código de estudio, el total facturado discriminado por género. Es decir, cuánto pagaron en total las mujeres y cuánto los hombres.

int main(){
    int i, j;
    int codigoEstudio, codigoPaciente,  edad;
    char genero;
    float importe;
    ///para el punto a
    int cpMenorValor, edadMenorValor, menorPrecio2;
    bool primero=true;
    ///punto b
    int cantMas60Menos50=0;
    ///PUNTO C
    float totalM, totalF;

    for(i=1;i<=3;i++){
        cout<<"CODIGO DE ESTUDIO: ";
        cin>>codigoEstudio;
        ///para el punto c
        totalM=totalF=0;
        for(j=1;j<=5;j++){
            ///entrada de cada registro
            cout<<"CODIGO DE PACIENTE: ";
            cin>>codigoPaciente;
            cout<<"EDAD: ";
            cin>>edad;
            cout<<"GENERO: ";
            cin>>genero;
            cout<<"IMPORTE: ";
            cin>>importe;

            ///para el punto a
            if(codigoEstudio==2){
                if(primero==true){
                    menorPrecio2=importe;
                    cpMenorValor=codigoPaciente;
                    edadMenorValor=edad;
                    primero=false;
                }
                else{
                    if(importe<menorPrecio2){
                        menorPrecio2=importe;
                        cpMenorValor=codigoPaciente;
                        edadMenorValor=edad;
                    }
                }
            }
            ///punto b
            if(edad>60 && importe<50) cantMas60Menos50++;
            ///PUNTO C
            if(genero=='F'){
                totalF+=importe;
            }
            else{
                totalM+=importe;
            }
        }
        system("cls");
        cout<<"PARA EL ESTUDIO "<<codigoEstudio<<endl;
        cout<<"SE FACTURO "<<totalM<<" PARA HOMBRES Y "<<totalF<<" PARA MUJERES"<<endl;
        system("pause");
    }
	system("cls");
	cout<<"PACIENTE DEL ESTUDIO 2 CON IMPORTE MENOR: "<<cpMenorValor<<" EDAD: "<<edadMenorValor<<endl;
	cout<<"CANTIDAD DE TURNOS DE PERSONAS MAYORES A 60 QUE PAGARON MENOS DE 50: "<<cantMas60Menos50<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
