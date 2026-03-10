#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct rota{

    string aluno;
    string regiao;
    int distancia;
};

bool ordenaRota(const rota &a, const rota &b){

    if (a.distancia != b.distancia) 
        return a.distancia < b.distancia;
    
    if (a.regiao != b.regiao) 
        return a.regiao < b.regiao;
    
    return a.aluno < b.aluno;
};

int main(){

    int Q;
    while(cin >> Q){

        vector<rota> van;

        for(int i = 0; i < Q; i++){
            rota temp;
            cin >> temp.aluno >> temp.regiao >> temp.distancia;
            van.push_back(temp);
        }

        sort(van.begin(), van.end(), ordenaRota);

        for(auto v:van){
            cout << v.aluno << endl;
        }
    }
    return 0;
}