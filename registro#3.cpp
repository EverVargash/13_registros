#include <iostream>
#include <string>

using namespace std;

struct personas{
    int mes, dia, year;
    string name;
} Fechas[100];

int main(){
    int num, cantm, mont;
        cout<<"***********************************************"<<endl;
        cout<<"            FECHAS_DE_NACIMIENTO"<<endl;
        cout<<"***********************************************"<<endl;
        cout<<"\nCantidad de personas: "; cin>>num;

    for(int i=0;i<num;i++){
        cin.ignore();
        cout<<"\nNombre: "; getline(cin, Fechas[i].name);

        do {

            cout<<"\nMes: "; 
            cin>>mont;
            if(0< mont && mont<=12){
                Fechas[i].mes=mont;
            }

            else {
                cout<<"Ingrese de nuevo ..."<<endl;
            }

        } while(mont<=0 || mont>12);

        cout<<"\nDia: "; cin>>Fechas[i].dia;
        cout<<"\nAño: "; cin>>Fechas[i].year;
        cout<<"***************************************"<<endl;
    }
    system("cls");
    
    cout<<"Ingrese un mes: ";
    cin>>cantm;
    for(int j=0;j<num;j++){
        if (cantm==Fechas[j].mes){
            cout<<"Se iguala a: "<<endl;
            cout<<"\nNombre: "<<Fechas[j].name<<endl;
            cout<<"\nMes: "<<Fechas[j].mes<<endl;
            cout<<"\nDia: "<<Fechas[j].dia<<endl;
            cout<<"\nAño: "<<Fechas[j].year<<endl;
            cout<<"***************************************"<<endl;        
        }
    }
    
    return 0; 
}