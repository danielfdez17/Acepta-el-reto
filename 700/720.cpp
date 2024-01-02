#include<iostream>
using namespace std;

int main() {
    while (true) {
        int size; cin >> size;
        if (!cin ) break;
        string s; getline(cin, s);
        cout << size / 2 << "\n";
    }
    return 0;
}