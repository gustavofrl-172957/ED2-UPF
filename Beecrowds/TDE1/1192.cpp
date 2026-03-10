#include <iostream>
#include <cctype>

using namespace std;

struct game{
    int numeroUm;
    char letra;
    int numeroDois;
};


int main(){

    int N, R = 0;

    cin >> N;

    game v[N];

    for (int i = 0; i < N; i++){

        cin >> v[i].numeroUm >> v[i].letra >> v[i].numeroDois;
    }

    for (int i = 0; i < N; i++){

        if (isupper(v[i].letra) && v[i].numeroUm != v[i].numeroDois){
            R = v[i].numeroDois - v[i].numeroUm;
            cout << R << endl;

        } else if (islower(v[i].letra) && v[i].numeroUm != v[i].numeroDois){
            R = v[i].numeroUm + v[i].numeroDois;
            cout << R << endl;

        } else if(v[i].numeroUm == v[i].numeroDois){
            R = v[i].numeroUm * v[i].numeroDois;
            cout << R << endl;
        }
    }

    return 0;
}