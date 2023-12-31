#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n != 0) {
        int aux = n;
        int sum = 0;
        while (aux--) {
            int x; cin >> x;
            sum += x;
        }
        cout << sum - n + 1 << "\n";
        cin >> n;
    }

    return 0;
}