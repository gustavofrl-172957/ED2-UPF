#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int N, abertos = 0, fechados = 0, diamantes = 0;
    cin >> N;

    vector<string> mineracao(N);

    for (int i = 0; i < N; i++){
        cin >> mineracao[i];
    }

    for(int i = 0; i < N; i++){

        for(char j : mineracao[i]){

            if(j == '<'){
                abertos++;

            } else if (abertos == 0 && j == '>'){
                fechados++;

            } else if (abertos > 0 && j == '>'){
                abertos--;
                fechados--;
                diamantes++;
            }
        }

        cout << diamantes << "\n";
        diamantes = 0;
        abertos = 0;
        fechados = 0;
    }

    return 0;
}