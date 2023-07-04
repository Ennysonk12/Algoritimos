//2. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

//Ennyson jeielly. If23 

//hablas espanol? 

#include <iostream>

#include <string>



int main() {

     std::string inputString;

     std::cout << "escribe un string: ";

     std::cin >> inputString;



    if (inputString.length() >= 4) {

       std::string fourLetters = inputString.substr(0, 4);

       std::cout << "Las primeras cuatro letras de la cadena son: " << fourLetters << std::endl;

    } else {

    std::cout << "La cadena no tiene al menos cuatro letras de largo." << std::endl;

    }



    return 0;

}

