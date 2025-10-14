#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3};

    //Adiciona 4 no final
    nums.push_back(4);

    //Remove o final
    nums.pop_back();

    //Adiciona em uma posição específica
    nums.insert(nums.begin() + 1, 15);
    // {1,15,2,3}

    //Remove uma posição específica
    nums.erase(nums.begin() + 1);
    //Removeu o 15
    
    //Limpa o vetor
    nums.clear();
}