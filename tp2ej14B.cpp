///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

/*14) Un ciudadano est� exento de votar si se cumple alguna de las siguientes situaciones:
a) Su edad es mayor a 70 a�os.
b) su edad es menor a 18 a�os.
c) Su edad es entre 18 y 70 a�os, pero se encuentra a m�s de 500 km de su ciudad.

Hacer un programa para ingresar la edad y la distancia de su ciudad de un ciudadano e indicar
con un cartel si est� o no est� exento de votar.


edad    14->exento; 72->exento
distancia

edad 20 distancia 600 ->exento
*/

//Hacer un programa para indicar si una persona est� o no exenta de votar en las elecciones para autoridades.
//Las personas mayores de 70 y las personas menores a 18 no tienen la obligaci�n de votar.

int main(){
    int edad, distancia;
    cout<<"INGRESE EDAD: ";
    cin>>edad;
    if(edad<18 || edad>70) {

            cout<<"EXENTO";
    }
    else{
        cout<<"NO EXENTO";
    }
    cout<<endl;
	system("pause");
	return 0;
}
