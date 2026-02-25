/**
 * Exemplo de Saída de arquivo - Em CSV
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

    ofstream tab;
    tab.open("tabela.txt"); // Arquivo de Saída a ser criado

    for( int i = 0; i < 100; i++){

        // tab << i é a mesma coisa que cout << i, só que vai mandar para a tabela
        tab << dec << i << " " 
            << hex << i << uppercase 
            << endl;
    }
    
    tab.close();

    return 0;
}