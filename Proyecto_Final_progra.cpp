#include <iostream>

 using namespace std;

 string nJ1, nJ2;

int preguntarCantidadJugadores();
 string solicitarNombre(int jNum);

 int main(){
 int repetirP;

do{ 
   int nJugadores = preguntarCantidadJugadores();

    switch (nJugadores) {
        case 1:
            nJ1 = solicitarNombre(1);
            break;
        case 2:
            nJ1 = solicitarNombre(1);
            nJ2 = solicitarNombre(2);
            break;
        default:
            cout << "numero de jugadores no valido." << endl;
            return 1;
    }

   cout << "¿quieres repetir el juego? \n" << " 1 = si \n" << " presiona cualquier tecla diferente de 1 para salir" << endl;
   cin >> repetirP;

 }while(repetirP == 1);

 cout << "gracis por jugar :)" << endl;

  return 0;
 }

 int preguntarCantidadJugadores() {
    int nJugadores;
    do {
        cout <<  " ¿quieres jugar con alguien más?------presiona (2) \n " << "¿quires jugar con el computador?------presiona(1)" << endl;
        cin >> nJugadores;
    } while (nJugadores != 1 && nJugadores != 2);

    return nJugadores;
}

string solicitarNombre(int jNum) {
    string nombre;
    cout << "Nombre de jugador " << jNum << ": " << endl;
    cin >> nombre;
    return nombre;
}


 