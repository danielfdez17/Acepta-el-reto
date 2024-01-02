#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int restanacci(int res0, int res1, int resn, vector<int>&v) {
    int r;
    if (resn == 0) { r = res0; }
    else if (resn == 1) { r = res1; }
    else {
        v.at(2) = v.at(1) - v.at(0);
        v.at(1) = v.at(0);
        v.at(0) = v.at(2);
        r = (restanacci(res0, res1, resn - 1, v) - restanacci(res0, res1, resn - 2, v));
    }
    return r;
}

bool resuelveCaso() {
    int res0, res1, resn;
    cin >> res0 >> res1 >> resn;
    if (res0 == 0 && res1 == 0 && resn == 0)
        return false;
    vector<int>v(3);
    v.at(0) = res0; v.at(1) = res1;
    cout << restanacci(res0, res1, resn, v) << "\n";

    return true;
}


int main() {



    while (resuelveCaso());


    return 0;
}