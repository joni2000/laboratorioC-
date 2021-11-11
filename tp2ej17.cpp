///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3, n4;
    int mayoresOiguales7=0, mayoresOiguales4=0;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n4;

    if(n1>=7){
        mayoresOiguales7++;
    }
    else{
        if(n1>=4){
            mayoresOiguales4++;
        }
    }
    ///análisis n2
    if(n2>=7){
        mayoresOiguales7++;
    }
    else{
        if(n2>=4){
            mayoresOiguales4++;
        }
    }

    ///análisis n3
    if(n3>=7){
        mayoresOiguales7++;
    }
    else{
        if(n3>=4){
            mayoresOiguales4++;
        }
    }

	///análisis n4
    if(n4>=7){
        mayoresOiguales7++;
    }
    else{
        if(n4>=4){
            mayoresOiguales4++;
        }
    }


	///cout<<"MAYORES O IGUALES A 7: "<<mayoresOiguales7<<endl;
	///cout<<"MAYORES O IGUALES A 4: "<<mayoresOiguales4<<endl;
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
