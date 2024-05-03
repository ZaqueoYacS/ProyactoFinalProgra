#include <iostream>
#include <string>


 using namespace std;
char tablero[3][3];//matriz
string jugador1,jugador2;//jugadores uno simpre sera persona el 2 puede ser pc
char simbolo1, simbolo2;// hay 2 opc X/0
bool turnojugador1 = true;//TIPO BOOL PARA VER A QUIEN LE TOCA


void iniciarTablero(){ //funcion de tablero con casillas vacias
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            tablero[i][j]='-';
        }
    }
}
void mostrarTablero(){//para ir mostrando el tablero cada nque se reinicia
    cout<<" 0 1 2 "<<endl;
    for(int i=0; i<3; i++){
        cout<<i<<" ";
        for(int j=0; j<3; j++){
            cout<<tablero[i][j]<<" ";


        }
        cout<<endl;
    }
}
bool tableroCompletado(){//para ver si no hay un empate
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(tablero[i][j]=='-'){
                return false;
            }
        }
    }
    return true;
}
bool verificarGanador(char simbolo){//su nombre lo dice Xd
    for(int i=0; i<3; i++){
        if(tablero[i][0] == simbolo && tablero [i][1] == simbolo && tablero[i][2]==simbolo){
            return true;//filas si hay 3 iguales
        }
        if(tablero[0][i]== simbolo && tablero [1][i] == simbolo && tablero [2][i] == simbolo){
            return true;//columnas
        }
    }
    if(tablero[0][0]== simbolo && tablero [1][1] == simbolo && tablero [2][2] == simbolo){
        return true;//diagonal principal
    }
    if(tablero[0][2] == simbolo && tablero [1][1] == simbolo && tablero [2][0] == simbolo){
        return true;//secundaria
    }
    return false;
}
void cambiodeTurno(){
    turnojugador1 = !turnojugador1;
}
void movimientoJugador(){
int fila, columna;
char simbolo;
if(turnojugador1){
    simbolo=simbolo1;
    cout<<jugador1<<", ingrese su movimiento (primero numero de fila luego numero de columna):";
}else{
    simbolo = simbolo2;
    cout<<jugador2<<", ingrese se movimiento (primero numero de fila luego numero de columna):";
    }
    cin>>fila>>columna;//mira si esta ocupada la casilla
    if(fila<0||fila>2 || columna<0||columna>2 || tablero[fila][columna] != '-'){
        movimientoJugador();
    }else{
        tablero[fila][columna] = simbolo;
    }
}


void movimientoCompu(){
    cout<<"movimiento de la computadora:"<<endl;
    int fila, columna;//genera el movimiento aleatorio
    do{
        fila = rand() % 3;
        columna = rand() % 3;
    }while (tablero [fila][columna] != '-');
    tablero[fila][columna]= simbolo2;
}


 int main(){


    
    iniciarTablero();


    cout<<"Bienvenido al juego Tres en raya!"<<endl;
    cout<<"ingrese el nombre del jugador 1: ";
    cin>>jugador1;
    cout<<"ingrese el nombre del jugador 2 o 'computadora' : ";
    cin>>jugador2;


    cout<<jugador1<<"elige tu simbolo para jugar (X/0):";
    cin>>simbolo1;
    simbolo1=toupper(simbolo1);
    if(simbolo1 == 'X'){
        simbolo2 = '0';
    }else{
        simbolo2 = 'X';
    }
    cout << "Símbolo para " << jugador1 << ": " << simbolo1 << endl;
    cout << "Símbolo para " << jugador2 << ": " << simbolo2 << endl;


    bool jugarOtravez = true;
    while(jugarOtravez){
        iniciarTablero();
        bool findelaPartida = false;
    while(!findelaPartida){
        mostrarTablero();
        if(turnojugador1){
            movimientoJugador();
        }else{
            if(jugador2 == "computadora"){
                movimientoCompu();
            }else{
                movimientoJugador();
            }
        }
        if(verificarGanador(simbolo1)){
            mostrarTablero();
            cout<<jugador1<<"gana!"<<endl;
            findelaPartida=true;


        }else if(verificarGanador(simbolo2)){
            mostrarTablero();
            if(jugador2 == "computadora"){
                cout<<"la computadora gana!"<<endl;
            }else{
                cout<<jugador2<<"gana!"<<endl;
            }
            findelaPartida=true;


        } else if (tableroCompletado()){
            mostrarTablero();
            cout<<"¡es un empate!"<<endl;
            findelaPartida=true;
        }
        cambiodeTurno();
    }
    cout<<"¿Quieres jugar de nuevo? (SI/NO):"<<endl;
    string opcion;
    cin>>opcion;
    if(opcion != "SI"){
        jugarOtravez=false;
    }
    }
    cout<<"gracias por jugar   :)"<<endl;
    return 0;
 }


    //faltan agregarle cosas como a quien le toca el primer turno y ver otras cosas mira que le podes 
    //arreglar estoy desde las 4 aca bro jajaja antes que te llamara ya estaba trabajando aca me ayudo un  de 2do
