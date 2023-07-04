//12. Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S. 



//Ennyson jeielly. if23.

#include <iostream>

#include <string>



int main() {

    using namespace std;



    string S;

    int i, j;



    cout << "Digite uma string: ";

    cin >> S;



    cout << "Digite dois(2) valores inteiros não negativos i e j: ";

    cin >> i >> j;



    string segmento = S.substr(i, j - i + 1);



    cout << "Segmento da string: " << segmento << endl;



    return 0;

}



