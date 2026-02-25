/**
 * Primeiro exemplo de entrada de dados utilizando um arquivo externo
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int n;
    ifstream arq;

    arq.open("numeros.txt"); // Tentativa de abrir arquivo

    if(!arq){ // Se não abriu o arquivo...:

        cout << "Nao foi possivel abrir o arquivo!" << endl;
        exit(1); // Termina a execução do programa
    }

    // semelhante a while(cin >> n) para entradas do teclado
    while (arq >> n){ // enquanto tiver conteúdo no arquivo, passa para o "n"
        
        cout << n * 3 << endl;
    }

    arq.close(); // fecha o arquivo para uso de outros programas

    return 0;
}