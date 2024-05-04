#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

// Función para imprimir el tablero
void printBoard(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << board[i][j];
            if (j < COLS - 1)
                cout << " | ";
        }
        cout << endl;
        if (i < ROWS - 1)
            cout << "---------" << endl;
    }
}

// Función para realizar un movimiento en el tablero
void makeMove(char board[ROWS][COLS], int row, int col, char symbol) {
    board[row][col] = symbol;
}

// Función para verificar si hay un ganador
char checkWinner(char board[ROWS][COLS]) {
    // Verificar filas y columnas
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return board[i][0]; // Ganador en fila i
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return board[0][i]; // Ganador en columna i
    }

    // Verificar diagonales
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return board[0][0]; // Ganador en diagonal principal
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[0][2]; // Ganador en diagonal secundaria

    // No hay ganador
    return ' ';
}

// Función para verificar si el tablero está lleno
bool isBoardFull(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (board[i][j] == ' ')
                return false; // Todavía hay casillas vacías
        }
    }
    return true; // El tablero está lleno
}

int main() {
    // Crear el tablero como una matriz 3x3 de caracteres
    char board[ROWS][COLS];

    // Inicializar el tablero con espacios en blanco
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            board[i][j] = ' ';
        }
    }

    // Imprimir el tablero inicial
    printBoard(board);

    // Variables para controlar el turno y el símbolo del jugador
    char currentPlayer = 'X';
    bool gameFinished = false;

    // Juego
    while (!gameFinished) {
        // Pedir al jugador que haga un movimiento
        int row, col;
        cout << "Jugador " << currentPlayer << ", ingresa la fila y columna donde quieres colocar tu símbolo (ejemplo: 1 2): ";
        cin >> row >> col;

        // Hacer el movimiento
        makeMove(board, row - 1, col - 1, currentPlayer);

        // Imprimir el tablero después del movimiento
        printBoard(board);

        // Verificar si hay un ganador
        char winner = checkWinner(board);
        if (winner != ' ') {
            cout << "¡El jugador " << winner << " ha ganado!" << endl;
            gameFinished = true;
        } else if (isBoardFull(board)) {
            cout << "¡Empate!" << endl;
            gameFinished = true;
        }

        // Cambiar al siguiente jugador
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}