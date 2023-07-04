//13. O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no qual cada letra é substituída por outra, que se apresenta N posições após ela no alfabeto. Por exemplo, com uma troca de três posições (N=3), a letra A seria D, B seria E e assim por diante. Escreva um programa que faça uso desse código de César para 03 posições. Entre uma string e imprima a string codificada, e depois decodifique imprimindo a string original. Exemplo: a ligeira raposa marrom saltou sobre o cachorro cansado d oljhlud udsrvd pduurp vdowrx vreuh r fdfkuur fdqvdgr Como seria este código para um N genérico? Dica: considere o alfabeto circular, ou seja, ao chegar na letra z, retorna para a letra a. 



//ennyson jeielly. if23. 

#include <iostream>

#include <string>



void codificarDecodificarCesar(std::string& texto, int deslocamento) {

    for (char& c : texto) {

        if (isalpha(c)) {

        c = 'a' + (c - 'a' + deslocamento) % 26;

        }

    }

}



int main() {

std::string texto;



std::cout << "Digite uma string: ";

std::getline(std::cin, texto);

codificarDecodificarCesar(texto, 3);

std::cout << "String codificada: " << texto << std::endl;



codificarDecodificarCesar(texto, -3);

std::cout << "String decodificada: " << texto << std::endl;



    return 0;

}

