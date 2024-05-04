#include <iostream>
using namespace std;
void saludos(){
    int edad;
    cout<<"ingrese su edad";
    cin>> edad;
    if (edad > 17){
        cout<<"ya eres mayor de edad:";
    }  else {
        cout<<"eres menor aún";
    }
}

int num(int comida){
bool grasa=false;
if (comida == 2){
    cout<<"\n es gratis\n";
grasa=true;
}
return grasa;
}
int main (){
int comida=2;
bool verdad;
saludos();
verdad=num(comida);
if (verdad){
    cout<<"invita la casa";
}else{
    cout<<"un admirador";
}

    return 0;
}