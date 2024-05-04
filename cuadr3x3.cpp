#include <iostream>
#include <string>
#include <cstdlib> // Para la función rand
#include <ctime>   // Para la función time

using namespace std;

char tablero[3][3]; // Matriz para el tablero
string jugador1, jugador2; // Nombres de los jugadores
char simbolo1, simbolo2; // Símbolos de los jugadores
bool turnoJugador1 = true; // Indica de quién es el turno

// Función para inicializar el tablero
void iniciarTablero() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tablero[i][j] = '-';
        }
    }
}

// Función para mostrar el tablero (modificada para hacerlo más grande y centrado)
void mostrarTablero() {
    system("clear"); // Limpia la pantalla (solo para sistemas Unix)
    cout << "\033[1;36m"; // Cambia el color del texto a cyan brillante
    cout << "JUEGO DEL TRES EN RAYA\n\n";
    cout << "\033[0m"; // Restaura el color del texto

    // Imprime espacios en blanco para centrar el tablero verticalmente
    for (int i = 0; i < 5; ++i)
        cout << endl;

    // Imprime espacios en blanco para centrar el tablero horizontalmente
    cout << "       ";
    cout << "  0   1   2  " << endl;
    cout << "       ";
    cout << " +---+---+---+" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "     ";
        cout << i << "  ";

        for (int j = 0; j < 3; j++) {
            cout << "| " << tablero[i][j] << " ";
        }

        cout << "|" << endl;
        cout << "       ";
        cout << " +---+---+---+" << endl;
    }

    // Imprime espacios en blanco para centrar el tablero verticalmente
    for (int i = 0; i < 5; ++i)
        cout << endl;
}

// Función para verificar si una casilla está ocupada
bool casillaOcupada(int fila, int columna) {
    return tablero[fila][columna] != '-';
}

// Función para realizar el movimiento del jugador
void movimientoJugador() {
    int fila, columna;
    char simbolo = turnoJugador1 ? simbolo1 : simbolo2;

    do {
        cout << (turnoJugador1 ? jugador1 : jugador2) << ", ingrese su movimiento (fila y columna separadas por espacio): ";
        cin >> fila >> columna;
        if (fila < 0 || fila > 2 || columna < 0 || columna > 2 || casillaOcupada(fila, columna)) {
            cout << "Movimiento inválido. Inténtalo de nuevo." << endl;
        }
    } while (fila < 0 || fila > 2 || columna < 0 || columna > 2 || casillaOcupada(fila, columna));

    tablero[fila][columna] = simbolo;
}

// Función para cambiar el turno
void cambiarTurno() {
    turnoJugador1 = !turnoJugador1;
}

// Función para verificar si hay un ganador
bool verificarGanador(char simbolo) {
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == simbolo && tablero[i][1] == simbolo && tablero[i][2] == simbolo) {
            return true; // Filas
        }
        if (tablero[0][i] == simbolo && tablero[1][i] == simbolo && tablero[2][i] == simbolo) {
            return true; // Columnas
        }
    }
    if (tablero[0][0] == simbolo && tablero[1][1] == simbolo && tablero[2][2] == simbolo) {
        return true; // Diagonal principal
    }
    if (tablero[0][2] == simbolo && tablero[1][1] == simbolo && tablero[2][0] == simbolo) {
        return true; // Diagonal secundaria
    }
    return false;
}

// Función para verificar si el tablero está completo (empate)
bool tableroCompleto() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == '-') {
                return false;
            }
        }
    }
    return true;
}

// Resto del código omitido para simplificar...

int main() {
    iniciarTablero();

    cout << "Bienvenido al juego Tres en Raya!" << endl;
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del jugador 2 o 'computadora': ";
    cin >> jugador2;

    cout << jugador1 << ", elige tu símbolo para jugar (X/O): ";
    cin >> simbolo1;
    simbolo1 = toupper(simbolo1);
    if (simbolo1 == 'X') {
        simbolo2 = 'O';
    } else {
        simbolo2 = 'X';
    }
    cout << "Símbolo para " << jugador1 << ": " << simbolo1 << endl;
    cout << "Símbolo para " << jugador2 << ": " << simbolo2 << endl;

    // Mostrar el tablero
    mostrarTablero();

    // Resto del código omitido para simplificar...

    return 0;
}