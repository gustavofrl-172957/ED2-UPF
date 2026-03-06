/**
 * Exemplo 03
 */

 #include <iostream>
 #include <fstream>
 #include <cctype>
 #include <iomanip>
 #include <bitset>

 using namespace std;

 int main(){

    ifstream arq("biblia.txt");

    if(!arq){

        cout << "Deu Ruim! Reabre!\n";
        return 1;
    }

    int cont[256] = {};
    char ch;

    while (arq.get(ch)){

        cont[int(ch)]++;
        // cout << ch << " | " << int(ch) << " | " << bitset<8>(ch) << endl;
    }

    for(int i = 0; i < 256; i++){

        if(cont[i] > 0) /* Encontrou o caracteres na leitura do texto */
            cout << i << " | " 
                 << (isprint(i) ? char(i) : ' ') /* Não são "printáveis" */ 
                 << " | " << bitset<8>(i) << " | " /* Binário */ 
                 << cont[i] << "\n"; /* Qtde de Recorrência */
    }

    arq.close();
    return 0;
 }