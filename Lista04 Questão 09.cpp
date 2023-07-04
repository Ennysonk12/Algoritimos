//09. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes a segunda string lida está contida dentro da primeira. 



//Ennyson jeielly. if23. 

#include <iostream>

#include <string>



int main() {

    using namespace std;



    string primeiraString, segundaString;



    cout << "Digite a primeira string: ";

    getline(cin, primeiraString);



    cout << "Digite a segunda string: ";

    getline(cin, segundaString);



    int contador = 0;

    size_t pos = 0;



    while ((pos = primeiraString.find(segundaString, pos)) != string::npos) {

        contador++;

        pos += segundaString.length();

    }



    cout << "A segunda string ocorre " << contador << " vez(es) na primeira string.\n";



    return 0;

}

