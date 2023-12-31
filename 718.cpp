#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int p; cin >> p;
    while (p != 0) {
        unordered_map<int,int>map; // * <number, repetitions>
        int pairs = 0, x; 
        while (p--) {
            cin >> x;
            unordered_map<int, int>::iterator it = map.find(x);
            if (it == map.end()) {
                map.insert({x, 1});
            }
            else {
                it->second++;
                if (it->second % 2 == 0)
                    ++pairs;
            }
        }
        cout << pairs << "\n";
        cin >> p;
    }

    return 0;
}