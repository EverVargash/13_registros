#include<iostream>
#include<string>

using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};

int main(){
    EMP empleados[100];
    int sum[100];
    int n, mayor;
    float ventas;
    cout<<"Ingrese numero de empleados: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Numero del empleado: "; cin>>empleados[i].num;
        cin.ignore();
        cout<<"Nombre: ";
        getline(cin,empleados[i].nom);
        for(int j=0;j<12;j++){
            cout<<"Ventas: "; cin>>empleados[i].ven[j];
        }
        cout<<"Salario: "; cin>>empleados[i].sal;
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<12;j++){
        cin>>empleados[k].ven[j];
        sum[k]+=empleados[k].ven[j];
        }
        mayor=
    }
    
    
    for(int k=0;k<n;k++){

    }

    return 0;
}