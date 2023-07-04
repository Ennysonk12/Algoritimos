//14. Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas aparecem num dicionário.

//ennyson jeielly. if23. 
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string primeiraString, segundaString;

    std::cout << "Digite a primeira string: ";
    std::getline(std::cin, primeiraString);

    std::cout << "Digite a segunda string: ";
    std::getline(std::cin, segundaString);

    std::cout << "Strings em ordem alfabética:" << std::endl;

    //Ordena que as strings fiquem em ordem alfabética.
    std::sort(primeiraString.begin(), primeiraString.end());
    std::sort(segundaString.begin(), segundaString.end());

   std::cout << primeiraString << std::endl;
   std::cout << segundaString << std::endl;

    return 0;
}
