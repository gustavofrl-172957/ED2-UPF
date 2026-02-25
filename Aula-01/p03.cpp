/**
 * Exemplo utilizando nome do arquivo a ser definido em tempo de execução
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream arq;
    string name; // Nome do arquivo a ser aberto

    cout << "Digite o nome do arquivo que voce quer ler: \n" << endl;
    getline(cin, name);

    arq.open(name); // Tentativa de abrir arquivo
    // arq.open("input/"+name) // Tenta abrir em uma pasta específica

    if(!arq){ // Se não abriu o arquivo...:

        cout << "Nao foi possivel abrir o arquivo!" << endl;
        exit(1); // Termina a execução do programa
    }

    string linha;

    // semelhante a while(cin >> n) para entradas do teclado
    while (getline(arq, linha)){ // enquanto tiver conteúdo no arquivo, passa para o "n"
        
        cout << linha << endl;
    }

    arq.close(); // fecha o arquivo para uso de outros programas

    return 0;
}