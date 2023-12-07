#include <iostream>
#include <fstream>
using namespace std;



void resuelveCaso() {
    int ini, fin;
    cin >> ini >> fin;
    int dif = fin - ini, sol = 0;
    for (int i = ini; i <= fin; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 == 0)
                    sol++;
            }
            else
                sol++;
        }
        //else {
        //    if (i % 4 == 0) {
        //        sol++;
        //    }
        //}
    }
    cout << dif - sol + 1 << " " << sol << "\n";

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