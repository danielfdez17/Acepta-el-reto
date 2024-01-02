#include <iostream>
#include <fstream>
using namespace std;


void resuelveCaso() {
    double longitud, avanzar, retroceder, distancia = 0;
    double sol, aux2;
    int aux, num = 0;
    cin >> longitud >> avanzar >> retroceder;
    if (avanzar <= retroceder && longitud != 0 && avanzar < longitud) {
        cout << "IMPOSIBLE\n";
    }
    else if (longitud == 0) {
        cout << 0 << "\n";
    }
    else if (avanzar >= longitud) {
        cout << 1 << "\n";
    }
    else {
        sol = longitud / (avanzar - retroceder);
        aux = sol;
        aux2 = aux;

        num = (aux - 1) * (avanzar - retroceder) + avanzar;
        if (num  > longitud) {
            aux--;
        }



        cout << ((aux2 < sol) ? aux + 1 : aux) << "\n";

    }

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