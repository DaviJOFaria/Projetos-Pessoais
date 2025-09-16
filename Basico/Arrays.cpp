#include <iostream>

int FuncInit(int a[2][5]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            std::cout << " " << a[i][j];
        }
        std::cout << "\n";
    }
}

int main(){

    int matriz[2][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}};
    FuncInit(matriz);

    return 0;
}