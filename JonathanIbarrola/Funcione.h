#ifndef FUNCIONE_H_INCLUDED
#define FUNCIONE_H_INCLUDED

///prototipos
void cargarInformacion(int Vs[], int Vt[], int Vc[]);
void puntoA(int Vs[]);
void puntoB(int Vt[]);
void puntoC(int Vc[]);
int  calcularMaximo(int Vt[],int tam);

///desarrollo de funciones
void cargarInformacion(int Vs[], int Vt[], int Vc[]){
    int nroClase, nroSede, codInstrumento, tiempo;
    float importe;
    cout<<"NUMERO DE CLASE: ";
    cin>>nroClase;
    while(nroClase!=0){
        cout<<"NUMERO DE SEDE: ";
        cin>>nroSede;
        cout<<"CODIGO DE INSTRUMENTO: ";
        cin>>codInstrumento;
        cout<<"DURACION DE LA CLASE: ";
        cin>>tiempo;
        cout<<"IMPORTE: ";
        cin>>importe;
    cout<<"---------------------------------"<<endl;
    ///punto a
    Vs[nroSede-100]++;

    ///punto b
    Vt[nroClase-1] = tiempo;

    ///punto c
    Vc[codInstrumento-1]++;

    cout<<"NUMERO DE CLASE: ";
    cin>>nroClase;
    }
}

void puntoA(int Vs[]){
    int i;
    for(i=0; i < 40; i++){
        if(Vs[i]>0){
        cout<<"Sede "<<i+100<<" cantidad de clases: "<<Vs[i]<<endl;
        }
    }
}

void puntoB(int Vt[]){
    int posMax;
    posMax = calcularMaximo(Vt, 500);
    cout<<"La clase de mas tiempo es la numero: "<<posMax+1<<endl;
}

void puntoC(int Vc[]){
    int i;
    cout<<"codigos de instrumentos con menos de 100 clases: "<<endl;
    for (i=0; i<20; i++){
        if((Vc[i] < 100) && (Vc[i] > 0)){
            cout<<i+1<<"\t";
        }
    }
    cout<<endl;
    cout<<endl;
}

int calcularMaximo(int v[],int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]){
            posMax=i;
        }
    }
    return posMax;
}


#endif // FUNCIONES_H_INCLUDED
