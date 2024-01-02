#include<iostream>
using namespace std;
#define GRAPES 12

int main() {
    int cases; cin >> cases;
    while (cases--) {
        int grapes, people; cin >> grapes >> people;
        if (grapes / people >= GRAPES)
            cout << "SI\n";
        else
            cout << "NO\n";
    }
    return 0;
}