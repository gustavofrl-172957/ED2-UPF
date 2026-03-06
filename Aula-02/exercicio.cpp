/**
 * Exercicio - Aula 02
 * 
 * Escreva um programa em C++ que realize as seguintes tarefas:
 * 1 - Solicite ao usuário o nome de um arquivo de texto.
 * 2 - Leia o conteúdo do arquivo e conte o número de ocorrências de cada caractere.
 * 3 - Escreva os resultados em um arquivo CSV com duas colunas: "Caractere" e "Contagem".
 * 
 * Cada caractere individual no arquivo de texto deve ser contado. 
 * Incluindo espaços, pontuação e caracteres especiais.
 * O arquivo CSV deve ser nomeado como "contagem_caracteres.csv".
 * Cada linha no arquivo CSV deve conter um caractere e sua contagem correspondente.
 * O programa deve manipular erros de abertura de arquivo de forma apropriada.
 * Exibindo mensagens de erro descritivas quando necessário.
 * Utilize o arquivo biblia.txt para validar sua solução.
 * Utilize os arquivos feitos em aula como exemplo.
 *  
 */

 #include <iostream>
 #include <fstream>
 #include <cctype>
 #include <iomanip>
 #include <bitset> /* Biblioteca para transformar em binário */

 using namespace std;

 int main(){

    ifstream arq; /* ("biblia.txt"); */
    string name;

    cout << "Digite o nome do arquivo que voce quer ler: \n" << endl;
    getline(cin, name);

    arq.open(name);

    if(!arq){

        cout << "Deu Ruim! Reabre!\n";
        return 1;
    }

    int cont[256] = {};
    unsigned char ch; /* char não aceita mais de um byte*/

    while (arq.get((char&)ch)){ /* cast necessário */

        cont[int(ch)]++;
    }

    ofstream tabela("contagem_caracteres.csv");
    if(!tabela){

        cout << "Erro ao criar arquivo! Reinicie!\n";
        return 1;
    }
    
    tabela  << "Caracter" << ";" 
            << "Contagem" << ";" 
            << "Binario" << ";"
            << "Hexadecimal";

    for(int i = 0; i < 256; i++){

        if(cont[i] > 0) /* Encontrou o caracteres na leitura do texto */
            tabela << char(i) << ";"
                   << dec << cont[i] << ";" /* Contagem */
                   << bitset<8>(i) << ";" /* Binário */
                   << hex << uppercase << i /* Hexadecimal */
                   << "\n";
    }

    tabela.close();
    arq.close();

    cout << "\nExtracao Finalizada! Verifique o arquivo .CSV Gerado!" << endl;

    return 0;
 }