#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct empleados {
    string name;
    char sex;
    int edad, salario;
} empt[200];

int main(){
    int n, temp;
    cout << setfill('*') << setw(100) << "" << endl;
    cout << left << setw(20) << "[DateTech]" << endl;
    cout << setfill('*') << setw(100) << "" << endl;
    cout << "\nIngrese el numero de empleados: "; cin>>n;

    for (int i=0; i<n ; i++){
        cin.ignore();
        cout<< "Nombre: "; getline(cin,empt[i].name);
        cout<< "Sexo: "; cin>>empt[i].sex;
        cout<< "Edad: "; cin>>empt[i].edad;
        cout<< "Salario: "; cin>>empt[i].salario;
    }

    cout<<"SUELDOS: "<<endl;
    for (int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if (empt[j].salario > empt[i].salario){
                empleados temp=empt[i];
                empt[i] =empt[j];
                empt[j] =temp;
            }
        }
    }

    for (int i=0;i<n;i++){
        cout << empt[i].name<<endl;
        cout << empt[i].sex <<endl;
        cout << empt[i].salario <<endl;
        cout << empt[i].edad <<endl;
        cout << "--------------------------------"<<endl;
    }
    return 0;
}