#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}


int suma(int a, int b, int c) {
    return a + b + c;
}

int suma(string a, int b, int c) {
    
    return  b + c;
}

int main() {
    int resultado1 = suma(2, 3);
    int resultado2 = suma(2, 3, 4);
    int resultado3 = suma("hola", 3, 4);
    
    cout << "Resultado 1: " << resultado1 << std::endl;
    cout << "Resultado 2: " << resultado2 << std::endl;
    cout << "Resultado 3: " << resultado3 << std::endl;
    
    return 0;
}