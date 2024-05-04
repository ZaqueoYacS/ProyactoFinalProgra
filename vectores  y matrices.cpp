#include <iostream>
using namespace std;
 int main (){
    int contador=0;
    string nombres [5];
while(contador<5){
cout<<"ingrese su nombre:"<<contador+1;
getline(cin,nombres[contador]);
contador++;

}
cout<<"los nombres escritos son:"<<nombres[0]<<endl;
cout<<"los nombres escritos son:"<<nombres[1]<<endl;
cout<<"los nombres escritos son:"<<nombres[2]<<endl;
cout<<"los nombres escritos son:"<<nombres[3]<<endl;
cout<<"los nombres escritos son:"<<nombres[4]<<endl;
    return 0;
 }