//11. Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista. 



//Ennyson jeielly. if23.

#include <iostream>

#include <string>



int main() {

    using namespace std;



    string nomeMercadoria;

    double valorTotal, valorDesconto, valorAVista;



    cout << "Digite o nome da mercadoria: ";

    getline(cin, nomeMercadoria);



    cout << "Digite o valor total da mercadoria: ";

    cin >> valorTotal;



    valorDesconto = valorTotal * 0.1;

    valorAVista = valorTotal - valorDesconto;



    cout << "Nome da mercadoria: " << nomeMercadoria << endl;

    cout << "Valor total: " << valorTotal << endl;

    cout << "Valor do desconto: " << valorDesconto << endl;

    cout << "Valor a ser pago à vista: " << valorAVista << endl;



    return 0;

}

