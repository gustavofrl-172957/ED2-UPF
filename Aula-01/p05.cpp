/**
 * Exemplo de Saída de arquivo - Em CSV
 */

#include <iostream>
#include <iomanip>
#include <bitset>
#include <fstream>

using namespace std;

int main(){

    ofstream tabela;
    tabela.open("tabela.csv"); // Arquivo CSV a ser criado

    for( int i = 0; i < 100; i++){

        tabela  << dec << i << ";" 
                << bitset<8>(i) << ";"
                << hex << uppercase << i << endl;
    }
    
    tabela.close();

    return 0;
}