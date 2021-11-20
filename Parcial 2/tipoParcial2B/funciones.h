#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///prototipos
void cargarInformacion(int vp[], int vk[], int vv[], int m[5][5]);
void puntoA(int m[][5]);
void puntoB(int vp[]);
void puntoC(int vk[]);
void puntoD(int vv[]);
int calcularMaximo(int v[],int tam);

///desarrollo de funciones
void cargarInformacion(int vp[], int vk[], int vv[], int m[5][5]){
    int nroExportacion, region, producto, kilos;
    float importe;
    cout<<"NUMERO DE EXPORTACION: ";
    cin>>nroExportacion;
    while(nroExportacion!=0){
        cout<<"REGION: ";
        cin>>region;
        cout<<"PRODUCTO: ";
        cin>>producto;
        cout<<"CANTIDAD DE KILOS: ";
        cin>>kilos;
        cout<<"IMPORTE DE LA EXPORTACION: ";
        cin>>importe;
        ///cargar de las variables para resolver los puntos
        ///punto a
        m[region-1][producto-1]+=kilos;

        ///punto b
        if(region==3){
            vp[producto-1]++;
        }
        ///fin punto b
        ///punto c
        vk[region-1]+=kilos;
        ///fin punto c
        ///punto d
        if(importe>5000){///OJO QUE MODIFICAMOS EL ENUNCIADO!!!
            vv[region-1]++;
        }
        cout<<"NUMERO DE EXPORTACION: ";
        cin>>nroExportacion;
    }
}


void puntoA(int m[5][5]){
    int i, j;
    for(i=0; i<5;i++){
        cout<<"REGION "<<i+1<<endl;
        for(j=0;j<5;j++){
            cout<<"CANTIDAD DE KILOS DEL PRODUCTO "<<j+1<<" "<<m[i][j]<<endl;
        }
        cout<<endl;
        system("pause");
    }
}
void puntoB(int vp[]){
    int i;
    cout<<"PRODUCTOS QUE NO FUERON EXPORTADOS POR LA REGION PAMPEANA"<<endl;
    for(i=0;i<5;i++){
        if(vp[i]==0){
            cout<<i+1<<endl;
        }
    }
}
void puntoC(int vk[]){
    int posMax;
    posMax=calcularMaximo(vk, 5);
    cout<<"LA REGION QUE MAS KILOS EXPORTO FUE: "<<posMax+1<<endl;
}

void puntoD(int vv[]){
    int i;
    for(i=0;i<5;i++){
        cout<<"REGION: "<<i+1<<endl;
        cout<<"CANTIDAD DE EXPORTACIONES DE MAS DE IMPORTE DE MAS DE 5000: "<<vv[i]<<endl<<endl;
    }

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
