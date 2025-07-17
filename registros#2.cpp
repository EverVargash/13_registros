#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombres;
    int edad;
    int DNI;
}PERSONAS[100];

int main(){
    int n, cant=0, cantMAY=0;
    cout<<"******************************************"<<endl;
    cout<<"            DATOS_DEMOGRAFICOS"<<endl;
    cout<<"******************************************"<<endl;

    cout<<"\nCantidad de personas: "; cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Nombres: "; getline(cin,PERSONAS[i].nombres);
        cout<<"Edad: "; cin>>PERSONAS[i].edad;
        if(PERSONAS[i].edad > 50){
            cantMAY++;
        }
        cant+=PERSONAS[i].edad;
        cout<<"DNI: "; cin>>PERSONAS[i].DNI;
        cout<<"------------------------------------------"<<endl;
    }

    cout<<"******************************************"<<endl;
    cout<<"               RESULTADOS"<<endl;
    cout<<"******************************************"<<endl;
    cout<<"\nPromedio de edades: "<<cant/n<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Personas mayores de 50: "<<cantMAY<<endl;
    cout<<"------------------------------------------"<<endl;
    for (int i=0;i<n;i++){
        cout<<"PERSONA #"<<i+1<<endl;
        cout<<"Nombres: "<<PERSONAS[i].nombres<<endl;
        cout<<"Edad: "<<PERSONAS[i].edad<<endl;
        cout<<"DNI: "<<PERSONAS[i].DNI<<endl;
        cout<<"------------------------------------------"<<endl;
    }

    return 0;
}