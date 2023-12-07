// Galibo
#include<iostream>
using namespace std;

#define ALTURA 800

int main() {
    int puentes; cin >> puentes;
    while (puentes != 0) {
        int altura = ALTURA;
        while (puentes--) {
            int maximoPuente = -1;
            int tuneles; cin >> tuneles;
            while (tuneles--) {
                int x; cin >> x;
                maximoPuente = max(x, maximoPuente);
            }
            altura = min(altura, maximoPuente);
        }
        cout << altura << "\n";
        cin >> puentes;
    }
    return 0;
}