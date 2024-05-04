#include <iostream>
using namespace std;

//void fnCantidad(double &cantidad);
//void fnprecio(double &precio);
//void fnMinutos(int &  minutos)
//void fnclave (char & clave);
//void fnRendimiento(double & rendimiento);

void fnTiempo(int & seg, int & min, int & horas){ 
}

void cambio(int num, int & cin, int & cincuenta, int & veinte, int & diez, int & cinco, int & uno){

}

int encontrarMax(int x, int y);

int main(){
 int opc;
 cout<<"elija el numero de referencia que desae visualizar:";
 cin>>opc;

switch (opc)
{
case 1: cout<<"void fnTiempo(int & seg, int & min, int & horas)";
    break;
case 2:
{
int primernum, segundonum;
cout << "\nIntroduzca un numero : ";
	cin >> primernum;
	cout << "¡Estupendo!Por favor introduzca un segundo número : ";
	cin >> segundonum;
	int max= encontrarMax(primernum, segundonum); // aquí se llama a la función
	cout << "\nEl máximo de los dos números es " << max << endl;
    }
        break;
    
case 3:  
int usd;
          cout<<"ingrese cantidad de dolares:";
          cin>>usd;

    break;

default:
    break;
}
return 0;
}
int encontrarMax(int x, int y) {
    return (x >= y) ? x : y;
}
