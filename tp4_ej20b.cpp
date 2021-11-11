///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

/*Se define como divisores propios de un número a aquellos que son sus divisores
excluyendo al número en sí mismo.

Ejemplo. Los divisores propios del 4 son: 1 y 2.

Ejemplo. Los divisores propios del 12 son; 1, 2, 3, 4 y 6.

Se define a un número como perfecto cuando la suma de todos sus divisores propios
coincide con el número en sí mismo.

Ejemplo: 6 es número perfecto pues 1+2+3=6
Ejemplo: 28 es número perfecto pues 1+2+4+7+14=28
Ejemplo: 12 no es número perfecto pues 1+2+3+4+6=16

Hacer un programa para informar los números perfectos entre 1 y 1000.

*/
int main(){
    int num, divisor=1, sumaDivisores=0;
    for(num=1;num<=1000;num++){
        divisor=1;
        sumaDivisores=0;
        while(divisor<num){
            if(num%divisor==0){
                sumaDivisores+=divisor;
            }
            divisor++;
        }

        if(sumaDivisores==num){
            cout<<"EL NUMERO "<<num<< " ES UN NUMERO PERFECTO"<<endl;
        }

    }
	system("pause");
	return 0;
}
