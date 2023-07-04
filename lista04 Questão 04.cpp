//04. Faça um programa que leia uma string e a imprima de trás para a frente. 

//Ennyson jeielly. If23.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    for (auto it = palavra.rbegin(); it != palavra.rend(); ++it) {
        cout << *it;
    }

    cout << endl;

    return 0;
}
