//07. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc. 



//Ennyson jeielly. If23.

#include <iostream>

#include <string>

#include <algorithm>



using namespace std;



int main() {

    string palavra;

    cout << "Digite uma palavra: ";

    cin >> palavra;



    string palavraInvertida = palavra;

    reverse(palavraInvertida.begin(), palavraInvertida.end());



    if (palavra == palavraInvertida) { cout << "A palavra eh um palindromo.\n"; } 

    else { cout << "A palavra nao eh um palindromo.\n"; } 



    return 0;

}

