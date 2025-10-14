#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array <int, 4> arr = { 1, 2, 3, 4};

    cout << "Tamanho: " << arr.size();
    cout << "\nPrimeiro: " << arr.front();
    cout << "\nUltimo: " << arr.back();

    sort(arr.begin(), arr.end());
    cout << "\nOrdenado:\n";
    for (int i = 0; i < 4; i++){
        cout << " " << arr[i];
    }
    
}