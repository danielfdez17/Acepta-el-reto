#include <iostream>
#include <fstream>
using namespace std;

void resuelveCaso() { // si un numero cambia los otro dos se reinician a 0
    int major1, minor1, patch1, major2, minor2, patch2; char aux;
    cin >> major1 >> aux >> minor1 >> aux >> patch1 >> major2 >> aux >> minor2 >> aux >> patch2;
    if ((major1 + 1 == major2 && minor2 == 0 && patch2 == 0) ||
        (major1 == major2 && minor1 + 1 == minor2 && patch2 == 0) ||
        (major1 == major2 && minor1 == minor2 && patch1 + 1 == patch2)) {
        cout << "SI\n";
    }
    else { cout << "NO\n"; }
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