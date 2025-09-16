#include <iostream>


int multiply(int a){
    return a * 10;
}

void call(int a){
    std::cout << "Numero: " << a;
}

int main(){
    int numero;
    std::cin >> numero;
    numero = multiply(numero);
    call(numero);

    return 0;
}