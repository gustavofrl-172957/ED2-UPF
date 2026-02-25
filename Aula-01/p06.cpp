/**
 * Exemplo de Saída de arquivo - Em HTML
 */

#include <iostream>
#include <iomanip>
#include <bitset>
#include <fstream>

using namespace std;

int main(){

    ofstream pagina;
    pagina.open("pagina.html"); // Arquivo HTML a ser criado

    pagina  << "<!DOCTYPE html>\n"
            << "<html>\n"
            << "<head>\n <title> Estrutura de Dados 2 - 2026 </title> </head>"
            << "<body>\n"
            << "<h1> Conversão de decimal para binario </h1> \n"
            << "<table border =\"1\">\n";

    for( int i = 0; i < 100; i++){

        pagina  << "<tr>" 
                << "<td>" << dec << i << "</td>"
                << "<td>" << bitset<8>(i) << "</td>"
                << "<td>" << hex << uppercase << i << "</td>"
                << "</tr>" 
                << endl;
    }

    pagina << "</body>\n";
    pagina << "<!DOCTYPE html>\n";
    
    pagina.close();

    return 0;
}