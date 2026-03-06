/**
 * Exemplo 01 - Extrai caractere a caractere do texto usando o .get
 * 
 * Comparação com formas diferentes de extrair
 */

 #include <iostream>
 #include <fstream>

 using namespace std;

 int main(){

    ifstream arq("gpl3.txt"); /* Acesso direto ao Arquivo sem uso do .open */

    if(!arq){

        cout << "Erro ao abrir o arquivo! Verifique novamente.\n";

        return 1;
    }

    char ch;
    int conta = 0;

    /**
     * while(arq >> palavra) - É um método palavra a palavra até o EOF (End of File)
     * 
     * while(getline(arq, linha)) - É um método linha a linha até o EOF (End of File)
     * 
     * */ 
    while (arq.get(ch)){ /* Extrai um unico caracter do texto */
        
        cout << ch << "\n";
        conta++;
    }
    
    cout << endl;
    cout << "Qtde de caracteres: " << conta << endl;

    arq.close();

    return 0;
 }