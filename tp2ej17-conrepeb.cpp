///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///ESTRUCTURAS CICLICAS: PERMITEN QUE LAS INSTRUCCIONES CONTENIDAS DENTRO DE ELLAS SE REPITAN.
///PUEDEN SER DE DOS MANERAS: CUANDO SE LA CANTIDAD DE REPETICIONES-> CICLO EXACTO ->CICLO for()
///                           CUANDO NO SE LA CANTIDAD DE REPETICIONES->CICLO INEXACTO
int main(){
    int n1;
    int mayoresOiguales7, mayoresOiguales4, i;
    mayoresOiguales7=mayoresOiguales4=0;
    system("cls");
    for(i=1;i<=4;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>n1;
        if(n1>=7){
            mayoresOiguales7++;
        }
        else{
            if(n1>=4){
                mayoresOiguales4++;
            }
        }
    }

    if(mayoresOiguales7==4){
            cout<<"PROMOCIONA";
    }
    else{
        if((mayoresOiguales4+mayoresOiguales7)>=3){
            cout<<"RINDE EXAMEN FINAL";
        }
        else{
            if((mayoresOiguales4+mayoresOiguales7)==0){
                cout<<"RECURSA";
            }
            else{
                cout<<"RECUPERA PARCIALES";
            }
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}
