///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
dos n�meros positivos consecutivos, y luego informar el m�ximo. Cuando se ingresa el
n�mero positivo repetido el mismo debe ser descartado.
*/

int main(){
    int num, contadorPos=0, maximo, i;
    const int VUELTAS=2;
    for(i=1;i<=VUELTAS;i++){
        contadorPos=0;
        cout<<"NUMERO: ";
        cin>>num;
        maximo=num;
        if(num>0){
            contadorPos++;
        }

        while(contadorPos<2){

            cout<<"NUMERO: ";
            cin>>num;
            if(num>maximo){
                maximo=num;
            }
            if(num>0){
                contadorPos++;
            }
            else{
                contadorPos=0;
            }
        }
        cout<<"MAXIMO: "<<maximo;

        cout<<endl;
    }
	system("pause");
	return 0;
}
