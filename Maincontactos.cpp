#include<iostream>
#include "encabezadodcont.h"

using namespace std;

int main(){
    int n, op, modcontact, selec;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Mostrar contactos"<<endl;
        cout<<"3. Modificar contacto"<<endl;
        cout<<"4. Eliminar contacto"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 3:
                system("cls");
                cout<<"Elija un contacto: "<<endl; 
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                cout<<"Elejir(#): "; cin>>modcontact;
                imprimeContacto(lista[modcontact-1]);
                cout<<"_____MODIFICAR______"<<endl;
                cout<<"1. Nombre"<<endl;
                cout<<"2. Sexo"<<endl;
                cout<<"3. Edad"<<endl;
                cout<<"4. Usuario"<<endl;
                cout<<"5. Dominio"<<endl;
                cout<<"seleccione una opcion: "; cin>>selec;
                switch (selec){
                    case 1:
                        cin.ignore();
                        cout<<"Nuevo nombre: "; getline(cin, nom);
                        lista[modcontact-1].nom;
                        break;
                    case 2:
                        cout<<"Sexo: "<<endl;
                        cin>>lista[modcontact-1].sex;
                        break;
                    case 3:
                        cout<<"Edad: "<<endl;
                        cin>>lista[modcontact-1].edad;
                        break;
                    case 4:
                        cout<<"Nuevo usuario: "<<endl;
                        cin>>lista[modcontact-1].email.user;
                        break;
                    case 5:
                        cout<<"Nuevo dominio: "<<endl;
                        cin>>lista[modcontact-1].email.domain;
                        break;
                    default:
                        cout<<"Ingrese una opcion valida"<<endl;
                        break;
                }
                break;
            case 4:   
                cout << "Ingrese el número del contacto a eliminar: ";
                cin >> modcontact;
                if(modcontact > 0 && modcontact <= n){
                    for(int i = modcontact - 1; i < n - 1; i++){
                        lista[i] = lista[i + 1];
                }
                n--; 
                cout << "Contacto eliminado correctamente.\n";
                }
                else cout << "Número inválido.\n";
                system("pause");
                break;
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}