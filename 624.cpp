#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        unordered_set<int>set;
        int size = 0;
        while (n--) {
            int x; cin >> x;
            if (set.count(x) == 0) {
                set.insert(x);
            }
            else {
                set.erase(x);
            }
            size = std::max(size, (int)set.size());
        }
        cout << size << "\n";
    }

    return 0;
}