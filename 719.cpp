#include<iostream>
using namespace std;
#define MOD 4
#define MOD_100 100
#define MOD_400 400

int main() {
    int n; cin >> n;
    while (n != 0) {
        if (n % MOD_100 == 0) {
            if (n % MOD_400 != 0)
                cout << "NO\n";
        }
        cout << "SI\n";
        // if (n % MOD_100 == 0 && n % MOD_400 != 0) 
        //     cout << "NO\n";
        // else
        //     cout << "SI\n";
        // if (n <= MOD || n % MOD == 0) 
        //     cout << "NO\n";
        // else
        //     cout << "SI\n";
        cin >> n;
    }

    return 0;
}