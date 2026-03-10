#include <iostream>
#include <cmath>

using namespace std;

struct num{
    string a;
    string b;
};

int main(){

    int N;
    cin >> N;

    num v[N];

    for (int i = 0; i < N; i++){
        cin >> v[i].a 
            >> v[i].b;
    }

    for (int i = 0; i < N; i++){

        if(v[i].b.size() > v[i].a.size()){

            cout << "nao encaixa" << endl;

        } else if (v[i].b.size() <= v[i].a.size()){

            string ultimosDig = v[i].a.substr(v[i].a.size() - v[i].b.size(), v[i].b.size());
            if (ultimosDig == v[i].b){
                cout << "encaixa" << endl;
            } else if (ultimosDig != v[i].b){
                cout << "nao encaixa" << endl;
            }
        } 
    }

    return 0;
}