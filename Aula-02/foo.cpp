/**
 * Relembrando Tipagem
 * 
 */

#include <iostream>

using namespace std;

int main(){

    int a = 10, b = 4;

    // float c = a/b;

    float c = float(a) / float(b);

    cout << c << endl;

    return 0;
}