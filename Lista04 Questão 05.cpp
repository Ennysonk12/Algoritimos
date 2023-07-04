//05. Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida. 



//Ennyson jeielly. If23.

#include <iostream>

#include <algorithm>

#include <string>



using namespace std;



int main() {

    string palavra;

    cout << "Digite uma palavra: ";

    getline(cin, palavra);



    reverse(palavra.begin(), palavra.end());



    cout << "String invertida: " << palavra << endl;



    return 0;

}

