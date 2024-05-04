#include <iostream>
#include <string>
using namespace std;

void ejercicio1() {
int numeros[100];
int i=0;
for( i=1; i <= 100; i++){
    numeros[i]=i;
}
    for( i=1; i <= 100; i++){
    numeros[i]=i;
    cout<<i<<endl;
    } cout<<endl;

}
void ejercicio2() {
    int numeros[100];
    int i=0;
    for(i=100; i>=1; i--){
        numeros[i]=i;
    }
    for(i=100; i>=1; i--){
        numeros[i]=i;
        cout<<i<<endl;
    }
}
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void ejercicio3() {
    int numeros[100];
    int contador = 0; 
    for (int i = 1; i <= 100; ++i) {
        if (esPrimo(i)) {
            numeros[contador] = i; 
            contador++;
        }
    }
    for (int i = 0; i < contador; ++i) {
        cout<<numeros[i]<<endl;
    }
}
void ejercicio4() {
int numeros[100];
int i=0;
for(i=2; i<=100; i+=2){
    numeros[i]=i;
}
for(i=2; i<=100; i+=2){
    numeros[i]=i;
    cout<<i<<endl;
}

}

void ejercicio5(){
int numeros[100];
int i=0;
for( i=1; i<=100; i+=2){
    numeros[i]=i;
}
for( i=1; i<=100; i+=2){
    numeros[i]=i;
    cout<<i<<endl;
}
}
void ejercicio6(){
    int numeros[10];

    cout << "Ingrese 10 números:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
    }

    int suma = 0;
    int resta = numeros[0];
    int multiplicacion = 1;
    float division = static_cast<float>(numeros[0]);

    for (int i = 0; i < 10; ++i) {
        suma += numeros[i];
        if (i > 0) {
            resta -= numeros[i];
        }
        multiplicacion *= numeros[i];
        if (i > 0 && numeros[i] != 0) {
            division /= numeros[i];
        }
    }
    cout << "La suma de los números es: " << suma << endl;
    cout << "La resta de los números es: " << resta << endl;
    cout << "La multiplicación de los números es: " << multiplicacion << endl;
    cout << "La división de los números es: " << division << endl;

}
void ejercicio7(){
    int numeros[10];
    cout << "Ingrese 10 números:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 10 - 1; ++i) {
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (numeros[j] > numeros[j + 1]) {

                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    cout << "Números ordenados ascendentemente:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

}
void ejercicio8(){
    int primerArray[5];
    int segundoArray[5];
    int arrayCombinado[5 * 2];

    cout << "Ingrese 5 números para el primer array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> primerArray[i];
    }

    cout << "Ingrese 5 números para el segundo array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> segundoArray[i];
    }

    for (int i = 0; i < 5; ++i) {
        arrayCombinado[i] = primerArray[i];
        arrayCombinado[i + 5] = segundoArray[i];
    }

    cout << "Los 10 números son:" << endl;
    for (int i = 0; i < 5 * 2; ++i) {
        cout << arrayCombinado[i] << " ";
    }
    cout << endl;

}
void ejercicio9(){
char tablero[8][8] = {
        {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'t', 'c', 'a', 'm', 'r', 'a', 'c', 't'}
    };

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << tablero[i][j] << ' ';
        }
        cout << endl;
    }
}
void ejercicio10(int arr[3][3]) {

    int num = 2;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = num;
            num += 2;
        }
    }

    cout << "Array de dos dimensiones:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int x, y;
    cout << "Introduce la posición X (fila): ";
    cin >> x;
    cout << "Introduce la posición Y (columna): ";
    cin >> y;

    if (x >= 0 && x < 3 && y >= 0 && y < 3) {
        cout << "El número en la posición (" << x << "," << y << ") es: " << arr[x][y] << endl;
    } else {
        cout << "Posición inválida." << endl;
    }
}
void ejercicio11(int vMatriz[][3]) {
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> vMatriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << vMatriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Traspuesta de la matriz:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << vMatriz[j][i] << " ";
        }
        cout << endl;
    }



}
void ejercicio12(){
 string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (char &c : cadena) {
        c = c + 3; 
    }

    cout << "Cadena encriptada: " << cadena << endl;


}
struct Producto {
    string nombre;
    double precio;
    int cantidadStock;
};

void mostrarProducto(const Producto& producto) {
    cout << "Nombre: " << producto.nombre << endl;
    cout << "Precio: " << producto.precio << endl;
    cout << "Cantidad en stock: " << producto.cantidadStock << endl;
}

void mostrartienda(const Producto tienda[], int numProductos) {
    cout << "Productos en la tienda:" << endl;
    for (int i = 0; i < numProductos; ++i) {
        cout << "Producto " << i+1 << ":" << endl;
        mostrarProducto(tienda[i]);
        cout << endl;
    }
}

void ejercicio13() {

    Producto tienda[10] = {
        {"Manzanas", 1.5, 20},
        {"Plátanos", 2.0, 15},
        {"Naranjas", 1.0, 30},
        {"Peras", 1.8, 25},
        {"Uvas", 3.0, 18},
        {"Sandías", 5.0, 10},
        {"Melocotones", 2.5, 22},
        {"Fresas", 4.0, 12},
        {"Pepinos", 1.2, 28},
        {"Tomates", 1.0, 35}
    };

    mostrartienda(tienda, 10); 

    int opcion;
    do {
        cout << "\nMenú de opciones:" << endl;
        cout << "1. Mostrar información de un producto." << endl;
        cout << "2. Modificar el stock y precio de un producto." << endl;
        cout << "3. Salir." << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                cout << "Ingrese el nombre del producto: ";
                cin >> nombre;
                bool encontrado = false;
                for (const Producto& producto : tienda) {
                    if (producto.nombre == nombre) {
                        mostrarProducto(producto);
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Producto no encontrado." << endl;
                }
                break;
            }
            case 2: {
                string nombre;
                cout << "Ingrese el nombre del producto a modificar: ";
                cin >> nombre;
                bool encontrado = false;
                for (Producto& producto : tienda) {
                    if (producto.nombre == nombre) {
                        cout << "Ingrese el nuevo precio del producto: ";
                        cin >> producto.precio;
                        cout << "Ingrese la nueva cantidad en stock del producto: ";
                        cin >> producto.cantidadStock;
                        cout << "Producto modificado correctamente." << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Producto no encontrado. No se pudo modificar." << endl;
                }
                break;
            }
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 3);
}

int main (){
    int ejercicio;
    cout<<"ingrese el ejercicio que desea visualiar\n";
    cin>>ejercicio;
    string resultado;
    cin.ignore();
    
    switch (ejercicio)
    {
    case 1: 
    ejercicio1();
        break;
    case 2:
    ejercicio2();
        break;
    case 3:
    ejercicio3();
        break;
    case 4:
    ejercicio4();
        break;
    case 5:
    ejercicio5();
        break;
    case 6:
    ejercicio6();
        break;
    case 7:
    ejercicio7();
        break;
    case 8:
    ejercicio8();
        break;
    case 9:
    ejercicio9();
        break;
    case 10:
    int arr[3][3];
    ejercicio10(arr);
        break;
    case 11:
    int matriz [3][3];
    ejercicio11(matriz);
        break;
    case 12:
    ejercicio12();
        break;
    case 13: 
    ejercicio13();
    break;
    default: cout<<"no se ingreso un numero valido";
    }


    return 0;
}

