#include <iostream>

 using namespace std;

 int main(){
int repetirP;
int qJugador;
string nJ1, nJ2;

do{ 
   cout << " ¿quieres jugar con alguien más?------presiona (1) \n " << "¿quires jugar con el computador?------presiona(2)" << endl;
   cin >> qJugador;

   switch (qJugador)
   {
   case 1:

   cout << "Ingrese el nombre del jugador 1: ";
   cin >> nJ1;
   cout << " ";
   cout << "Ingrese el nombre del Jugadro 2: ";
   cin >> nJ2;

   break;

   case 2:
   cout << "Ingrese el nombre del jugador 1: ";
   cin >> nJ1;

   break;
   
   default:
   cout << "el numero no corresponde a ninguna opción" << endl;
      break;
   }


   cout << "¿quieres repetir el programa? \n" << " 1 = si \n" << " 2 = no" << endl;
   cin >> repetirP;

 }while(repetirP == 1);

 cout << "gracis por jugar :)" << endl;

  return 0;
 }




 