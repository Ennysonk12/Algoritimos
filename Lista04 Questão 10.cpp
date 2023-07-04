//10. Escreva um programa que leia uma string do teclado e mostre um menu para o usuário escolher se quer converter para maiúsculo ou minúsculo. 



//Ennyson jeielly. if23.

#include <iostream>

#include <string>

#include <cctype>



int main() {

    using namespace std;



    string texto;

    int opcao;



    cout << "Digite uma string: ";

    getline(cin, texto);



    cout << "Escolha uma opcao:\n";

    cout << "1. Converter para maiusculo\n";

    cout << "2. Converter para minusculo\n";

    cout << "Opcao: ";

    cin >> opcao;



    for (char& c : texto) {

        if (opcao == 1) {

            c = toupper(c);

        } else if (opcao == 2) {

            c = tolower(c);

        } else {

            cout << "Opcao invalida!\n";

            return 1;

        }

    }



    cout << "Texto convertido: " << texto << endl;



    return 0;

}

