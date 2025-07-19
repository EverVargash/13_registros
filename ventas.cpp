#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct venta{
    int idventa, cantidad;
    float precioTotal;
    string producto;  
};

struct producto{
    string nombre;
    float precio;
    venta caract;
} PRODUCTOS[100];

string menu(){
    string op;
    system("cls");
    cout<<"**************************************"<<endl;
    cout<<"        GESTIONAR_PRODUCTOS"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"A) Registrar un nuevo producto."<<endl;
    cout<<"B) Listar los productos registrados."<<endl;
    cout<<"C) Buscar un producto por nombre."<<endl;
    cout<<"D) Actualizar los datos de un producto."<<endl;
    cout<<"E) Eliminar un producto."<<endl;
    cout<<"F) Registrar una venta."<<endl;
    cout<<"G) Listar las ventas realizadas."<<endl;
    cout<<"H) Calcular el total de ventas."<<endl;
    cout<<"S) Salir del programa."<<endl;
    cout<<"\nSELECIONE UNA OPCION "; cin>>op;
    return op;
}

int main(){
    int num, cant=0;
    string OP;
    
    do {
        OP=menu();
        if(OP == "a" || OP == "A"){
            cout<<"\n******************************************"<<endl;
            cout<<"        REGISTRAR_UN_PRODUCTO"<<endl;
            cout<<"******************************************"<<endl;
            cout<<"\nCANTIDAD DE PRODUCTOS A INGRESAR "; cin>>num;
            for(int i=0;i<num;i++){
                cin.ignore();
                cout<<"\nNombre: ";  getline(cin, PRODUCTOS[cant].nombre);
                cout<<"\nPrecio: "; cin>>PRODUCTOS[cant].precio;
                cout<<"CARACTERISTICAS: "<<endl;
                cout<<"ID de venta: "; cin>>PRODUCTOS[cant].caract.idventa;
                cout<<"Cantidad: "; cin>>PRODUCTOS[cant].caract.cantidad;
                cout<<"Tipo de producto: "; cin>>PRODUCTOS[cant].caract.producto;
                cout<<"--------------------------------------------"<<endl;
                PRODUCTOS[cant].caract.precioTotal = PRODUCTOS[cant].precio * PRODUCTOS[cant].caract.cantidad;
                cout<<"PRESIO TOTAL: "<<PRODUCTOS[cant].caract.precioTotal<<endl;
                cant++;
                system("pause");
            }
        }
        else if (OP == "b" || OP =="B"){
            cout << left;
            cout <<"|"<< setw(5) << "  Num"
            <<"|"<< setw(20) <<"  Nombre"
            <<"|"<< setw(10) <<"  Precio"
            <<"|"<< setw(10) <<"  ID"
            <<"|"<< setw(10) <<"  Cantidad  |"<<endl;

            for(int i=0 ; i<cant ; i++){
                cout<<left;
                cout <<"|"<< setw(5) <<i+1
                <<"|"<< setw(20) <<PRODUCTOS[i].nombre
                <<"|"<< setw(10) <<PRODUCTOS[i].precio
                <<"|"<< setw(10) <<PRODUCTOS[i].caract.idventa
                <<"|"<< setw(10) <<PRODUCTOS[i].caract.cantidad<<"  |"<<endl;
            }
            system("pause");
        }

    } while(OP != "0");
    return 0;
}