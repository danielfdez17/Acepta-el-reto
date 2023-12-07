#include <iostream>
using namespace std;

int main() {
    int numCasos;
    cin >> numCasos;

    for (int i = 0; i < numCasos; i++) {
        long long num;
        cin >> num;
        long long aux = num / 10;
        if (num != 5) {
            cout << (aux * (aux + 1)) << "25" << endl;
        }
        else
            cout << "25" << endl;
    }

    return 0;
}