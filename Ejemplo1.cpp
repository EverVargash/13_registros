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
    int n, mayor, indicemayor=0; 
    int suma[100] = {0};

    cout<<"Ingrese numero de empleados: "; cin>>n;
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
        for(int l=0;l<12;l++){
            suma[k]+=empleados[k].ven[l];
        }
        if (suma[k]>100){
            empleados[k].sal = (empleados[k].sal)*1.1;
        }
        if (empleados[k].ven[11]<30){
            cout<<"El empleado numero "<<empleados[k].num<<" "<<empleados[k].nom<<" obtuvo solo "<<empleados[k].ven[11]<<"ventas en el mes de diciembre"<<endl;
        }
    }

    mayor=suma[0];
    for(int m=1;m<n;m++){
        if (mayor<suma[m]){
            mayor=suma[m];
            indicemayor=m;
        }
    }

    cout<<"El empleado numero "<<empleados[indicemayor].num<<" "<<empleados[indicemayor].nom<<" tiene la mayor cantidad de ventas con: "<<mayor<<endl;
    cout<<"Su sueldo sera de: "<<empleados[indicemayor].sal<<endl;
}