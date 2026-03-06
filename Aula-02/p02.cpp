/**
 * Exemplo 02 - Funções de validação de caracteres da lib cctype
 * 
 * Fizemos a validação de vários tipos de caracteres.
 */

 #include <iostream>
 #include <fstream>
 #include <cctype>
 #include <iomanip>

 using namespace std;

 int main(){

    ifstream arq("gpl3.txt");

    if(!arq){

        cout << "Deu Ruim! Reabre!\n";
        return 1;
    }

    char ch;
    int qtdLetras = 0, 
        qtdDig = 0, 
        qtdSpace = 0, 
        qtdOutros = 0;

    while(arq.get(ch)){

        if(isalpha(ch)) 
            qtdLetras++;        /* é letra? */
        else if(isdigit(ch)) 
            qtdDig++;           /* é dígito? */
        else if(isspace(ch)) 
            qtdSpace++;         /* é espaço? */
        else 
            qtdOutros++;        /* é algum outro caracter */
    }

    int totalCh = qtdLetras + qtdDig + qtdSpace + qtdOutros;

    cout << "\n"
         << "Total de Caracteres: " << totalCh << "\n"
         << fixed << setprecision(2)
         << qtdLetras << " de Letras (" << qtdLetras * 100.00/totalCh << "%)" << "\n"
         << qtdDig << " de Digitos (" << qtdDig * 100.00/totalCh << "%)" << "\n"
         << qtdSpace << " de Espacos (" << qtdSpace * 100.00/totalCh << "%)" << "\n"
         << qtdOutros << " de Outros Caracteres (" << qtdOutros * 100.00/totalCh << "%)" << "\n"
         << endl; 

    arq.close();
    return 0;
 }