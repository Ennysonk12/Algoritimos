//03. Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela possui 



//Ennyson jeielly. If23.

#include <iostream>

#include <string>



using namespace std;



int main() {

    string palavra;

    cout << "Digite uma palavra: ";

    getline(cin, palavra);



    int contador = palavra.size();



    cout << "A palavra possui " << contador << " caracteres." << endl;



    return 0;

}

