#include <iostream>
#include <fstream>
using namespace std;

void resuelveCaso() {
    int n;
    cin >> n;
    if (n > 0) {
        n--;
    }
    cout << n << "\n";
}

int main() {


    unsigned int numCasos;
    cin >> numCasos;
    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }


    return 0;
}