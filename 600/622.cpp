// NOMBRE Y APELLIDOS
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

const int MAX = 10;

int resolver(const vector<int>& v, int m, int media) {
    int i = 0;
    bool found = ((media * ((int)v.size() + 1)) - m > 10);
    while (i <= MAX && !found) {
        m += i;
        found = (m / ((int)v.size() + 1) == media);
        m -= i;
        i++;
    }
    if (found) {
        i--;
    }
    else {
        i = -1;
    }
    return i;
}


bool resuelveCaso() {
    int examenes;
    cin >> examenes;
    if (examenes == 0 || examenes >= MAX)
        return false;
    vector<int> v(examenes);
    int media, m = 0, temp;
    for (int i = 0; i < examenes; i++) {
        cin >> temp;
        if (temp >= 0 && temp <= MAX) {
            v.at(i) = temp;
            m += temp;
        }
    }
    cin >> media;
    int nota = resolver(v, m, media);
    if (nota == -1) { cout << "IMPOSIBLE\n"; }
    else { cout << nota << "\n"; }
    return true;
}


int main() {

    // ajuste para que cin extraiga directamente de un fichero
//#ifndef DOMJUDGE
//    ifstream in("in.txt");
//    auto cinbuf = std::cin.rdbuf(in.rdbuf());
//    //ofstream out("out.txt");
//    //auto coutbuf = std::cout.rdbuf(out.rdbuf());
//#endif

    while (resuelveCaso());

    // restablecimiento de cin
//#ifndef DOMJUDGE
//    cin.rdbuf(cinbuf);
//    //cout.rdbuf(coutbuf);
//    system("pause");
//#endif
    return 0;
}