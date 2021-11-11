///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*Datos de entrada
Código de provincia,
Código de producto,
Tipo ('F' - Fruta o 'V' - Verdura),
Toneladas exportadas,
Importe
*/



int main(){
    int i;
    int codigoProvincia,codigoProducto,toneladasExportadas;
    char tipo;
    float importe;
    ///variables punto a
    float importeTotal;
    int totalToneladas;
    ///punto b
    int totalProvincia5, mayorProvincia, maximo5=0;
    ///punto c
    int totalFrutas=0, totalVerduras=0, total;
    int porcentajeFrutas, porcentajeVerduras;

    for(i=1;i<=2;i++){
        importeTotal=0;
        totalToneladas=0;

        totalProvincia5=0;
        ///ingresar la provincia
        system("cls");
        cout<<"PROVINCIA: ";
        cin>>codigoProvincia;
        cout<<"PRODUCTO: ";
        cin>>codigoProducto;

        while(codigoProducto>=0){
            cout<<"Tipo ('F' - Fruta o 'V' - Verdura) ";
            cin>>tipo;
            cout<<"Toneladas exportadas: ";
            cin>>toneladasExportadas;
            cout<<"Importe: ";
            cin>>importe;
            ///punto a
            importeTotal+=importe;
            totalToneladas+=toneladasExportadas;
            ///punto b
            if(codigoProducto==5){
                totalProvincia5+=toneladasExportadas;
            }
            ///punto c
            if(tipo=='V'){
                totalVerduras+=toneladasExportadas;
            }
            else{
                totalFrutas+=toneladasExportadas;
            }
            cout<<"PRODUCTO: ";
            cin>>codigoProducto;
        }
        ///salida del punto a
        cout<<"PROVINCIA: "<<codigoProvincia<<endl;
        cout<<"TONELADAS EXPORTADAS: "<<totalToneladas<<"\t"<<"IMPORTE RECAUDADO: "<<importeTotal<<endl;
        ///punto b
        if(totalProvincia5>maximo5){
            maximo5=totalProvincia5;
            mayorProvincia=codigoProvincia;
        }
        system("pause");

    }
	///salida punto b. 1 valor de código de provincia
	cout<<"CODIGO DE PROVINCIA QUE EXPORTO MAS DEL PRODUCTO 5: "<<mayorProvincia<<endl;
	///salida punto c. 2 valores
	total=totalVerduras+totalFrutas;
	porcentajeVerduras=((float)totalVerduras/total)*100;
	porcentajeFrutas=(float)totalFrutas/total*100;
	cout<<"PORCENTAJE VERDURAS: "<<porcentajeVerduras<<endl;
	cout<<"PORCENTAJE FRUTAS: "<<porcentajeFrutas<<endl;
	system("pause");
	return 0;
}
