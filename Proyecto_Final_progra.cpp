#include <iostream>
#include <string>
#include <ctime>

 using namespace std;

const string ncomp = "computador";
 int nJugadores;
 string nJ1, nJ2;
 char J1, J2, comp;

int preguntarCantidadJugadores();
 string solicitarNombre(int jNum);
 void elegirSimbolo(char &J1, char &J2);
 void primerTurno();


 int main(){

 nJugadores = preguntarCantidadJugadores();
  srand(time(NULL));


    switch (nJugadores) {
        case 1:
            nJ1 = solicitarNombre(1);
            elegirSimbolo(J1, J2);
            primerTurno();
            /* AQUÍ HAY QUE COLOCAR EL CUADRADO*/
            break;
        case 2:
            nJ1 = solicitarNombre(1);
            nJ2 = solicitarNombre(2);
            elegirSimbolo(J1, J2);
            primerTurno();
            /* AQUÍ HAY QUE COLOCAR EL CUADRADO*/
            break;
        default:
            cout << "numero de jugadores no valido." << endl;
            return 1;
    }

  return 0;
 }

 int preguntarCantidadJugadores() {
    int nJugadores;
    do {
        cout <<  " ¿quieres jugar con alguien mas?------presiona (2) \n " << "¿quires jugar con el computador?------presiona(1)" << endl;
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

void elegirSimbolo(char &J1, char &J2) {
    if(nJugadores == 2){
    cout << nJ1<< ", elija su simbolo---------------(X o O): ";
    cin >> J1;
    
    while (J1 != 'X' && J1 != 'x' && J1 != 'O' && J1 != 'o') {
        cout << "Solamente se pueden elegir-------------X o O------------------: ";
        cin >> J1;
    }
    if (J1 == 'x' || J1 == 'o') {
        J1 = (J1 == 'x') ? 'X' : 'O';
    }
    J2 = (J1 == 'X') ? 'O' : 'X';
    
    cout << nJ1 << "----------------: " << J1 << endl;
    cout << nJ2 << "----------------: " << J2 << endl;
    }else if(nJugadores == 1){
        cout << nJ1<< ", elija su simbolo---------------(X o O): ";
    cin >> J1;
    
    while (J1 != 'X' && J1 != 'x' && J1 != 'O' && J1 != 'o') {
        cout << "Solamente se pueden elegir-------------X o O------------------: ";
        cin >> J1;
    }
    if (J1 == 'x' || J1 == 'o') {
        J1 = (J1 == 'x') ? 'X' : 'O';
    }
    J2 = (J1 == 'X') ? 'O' : 'X';
    
    cout << nJ1 << "----------------: " << J1 << endl;
    cout << ncomp << "----------------: " << J2 << endl;
    }
}

    void primerTurno() {
    int numal = 1 + rand() % 3;/*numal es variable para numero aleatorio*/
    if (numal == 1) {
        cout << nJ1 << " empieza." << endl;
    } else if (numal == 2) {
        cout << nJ2 << " empieza." << endl;
    } else {
        cout << ncomp << " empieza." << endl;
    }
}



 