#include <iostream>
#include <fstream>
using namespace std;



void resuelveCaso() {
    int num;
    cin >> num;
    cout << num << " " << num * 2 << endl;
}

int main() {



    unsigned int numCasos;
    std::cin >> numCasos;
    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }


    return 0;
}