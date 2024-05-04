#include <iostream>
using namespace std;
int main (){
    int vMatriz [5][5];
    int num=0;
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            num=0;
            vMatriz[i][j]=num;
            cout<<vMatriz[i][j];
        }
        cout<<endl;
    }


    return 0;
}