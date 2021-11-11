#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void cargarCadena(char *pal, int tam){
  int i;
  fflush(stdin);
  for(i=0;i<tam;i++){
      pal[i]=cin.get();
	  if(pal[i]=='\n') break;
	  }
  pal[i]='\0';
  fflush(stdin);
}
///Permite cargar una cadena de caracteres. Acepta todos los caracteres hasta que se presione enter.
///Tiene 2 parámetros: la cadena donde escribir (el nombre del vector de char) y la cantidad de caracteres
///sin tener en cuenta el \0.
///PROTOTIPOS
void unaCadena();
void variasCadenas();
void mostrarMatriz(char dias[7][10],int cant);


///FIN PROTOTIPOS
///DESARROLLO FUNCIONS

void mostrarMatriz(char dias[7][10],int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<dias[i]<<endl;
    }
}

void unaCadena(){
    char cadena1[20], palabra[20];
    int valor;
    cout<<"INGRESE UNA PALABRA (cadena1): ";
    cin>>cadena1;
    cout<<"INGRESE OTRA PALABRA (palabra): ";
    cin>>palabra;
//    strcpy(palabra,cadena1);
//    cout<<"CONTENIDO DE cadena1: "<<cadena1<<endl;
//    cout<<"CONTENIDO DE palabra: "<<palabra<<endl;
//    valor=strcmp(cadena1, palabra);
//    cout<<valor<<endl;
//    if(valor==0){
//        cout<<"SON IGUALES"<<endl;
//    }
//    else{
//        cout<<"SON DISTINTOS"<<endl;
//    }
    if(strcmp(cadena1, palabra)==0){
        cout<<"SON IGUALES"<<endl;
    }
    else{
        cout<<"SON DISTINTOS"<<endl;
    }
}

void variasCadenas(){
    char diasSemana[7][10];
    int i;

    strcpy(diasSemana[0], "LUNES");
    strcpy(diasSemana[1], "MARTES");
    strcpy(diasSemana[2], "MIERCOLES");
    strcpy(diasSemana[3], "JUEVES");
    strcpy(diasSemana[4], "VIERNES");
    strcpy(diasSemana[5], "SABADO");
    strcpy(diasSemana[6], "DOMINGO");

    //mostrarMatriz(diasSemana,7);
    int dia;
    cout<<"INGRESAR EL DIA DE LA SEMANA (1: LUNES...7: DOMINGO): ";
    cin>>dia;
    cout<<diasSemana[dia-1]<<endl;
}


#endif // FUNCIONES_H_INCLUDED
