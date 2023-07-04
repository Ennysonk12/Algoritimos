//08.Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira. (estude a função strstr() que realiza esta tarefa) 



//Ennyson jeielly. If23. 

#include <iostream>

#include <cstring>



int main() {

    using namespace std;



    char primeiraString[100];

    char segundaString[100];



    cout << "Digite a primeira string: ";

    cin.getline(primeiraString, 100);



    cout << "Digite a segunda string: ";

    cin.getline(segundaString, 100);



    if (strstr(primeiraString, segundaString) != nullptr) {

        cout << "A segunda string esta contida na primeira string.\n";

    } else {

        cout << "A segunda string nao esta contida na primeira string.\n";

    }



    return 0;

}

