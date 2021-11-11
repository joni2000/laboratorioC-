#ifndef RESOLUCIONTP_H_INCLUDED
#define RESOLUCIONTP_H_INCLUDED

///PROTOTIPOS
void punto1();
///Cargar un vector de 10. Luego:
    ///a) Buscar el máximo valor
    ///b) Posición donde aparece el máximo.
    ///c) Cantidad de veces que aparece
void punto2();
void punto3();
void cadenas();

///
void punto1(){
    int vec[10], pos, cant;
    cargarVector(vec,10);
    pos=maximoVector(vec,10);
    cout<<"MAXIMO: "<<vec[pos]<<endl;
    cout<<"POSICION: "<<pos<<endl;
    cant=contarNumerosRepetidos(vec,vec[pos],10);
    cout<<"LA CANTIDAD DE VECES QUE APARECE EL MAXIMO EN EL VECTOR ES: "<<cant<<endl;

}


void punto2(){
    int vec[10], pos, cant;
    cargarVector(vec,10);
    pos=minimoVector(vec,10);
    cout<<"MINIMO: "<<vec[pos]<<endl;
    cout<<"POSICION: "<<pos<<endl;
    cant=contarNumerosRepetidos(vec,vec[pos],10);
    cout<<"LA CANTIDAD DE VECES QUE APARECE EL MINIMO EN EL VECTOR ES: "<<cant<<endl;
}

///Hacer un programa para cargar un vector de números enteros de 5 elementos, de manera aleatoria con números entre el 1 y el 6
///- La cantidad de veces que aparece cada número del 1 al 6 dentro del vector.
///- La suma de los valores contenidos en el vector.

void punto3(){
    int vec[5], sumaDeNumeros[6]={}, suma, i;
    cargarAleatorio(vec, 5, 6);
    cout<<"VECTOR CARGADO ALEATORIO"<<endl;
    mostrarVector(vec, 5);
    for(i=0;i<6;i++){
        sumaDeNumeros[i]=contarNumerosRepetidos(vec,i+1,5);
    }
    cout<<endl<<endl<<"CANTIDAD POR NUMERO"<<endl;
    for(i=0;i<6;i++){
        cout<<"CANTIDAD DE "<<i+1<<" "<<sumaDeNumeros[i]<<endl;
    }
}

void cadenas(){
    char palabra[15], otra[15];
    cin>>palabra;
    cout<<palabra<<endl;
    ///otra=palabra; no se puede de manera directa. Hay que usar una función
    strcpy(otra, "zorro");

    cout<<otra<<endl;
    int valor=strcmp(palabra, otra);
    cout<<"valor devuelto: "<<valor<<endl;
    if(valor==0){cout<<"SON IGUALES"<<endl;}/// 1 si la primera cadena es mayor; -1 si la primera cadena no es mayor
    else cout<<"SON DISTINTAS"<<endl;           /// mayor significa que está en el diccionario mas cerca de la z (final)

}

#endif // RESOLUCIONTP_H_INCLUDED
