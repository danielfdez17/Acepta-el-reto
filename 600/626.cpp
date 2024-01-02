#include<iostream>
#include<string>
using namespace std;
#define DAY_MONTH "29/02/"
#define DAY 29
#define MONTH 2

string toDate(int year) {
    string ret = "";
    if (999 >= year) {
        ret += '0';
        if (99 >= year) {
            ret += '0';
            if (9 >= year) 
                ret += '0';
        }
    }
    ret += to_string(year);
    return ret;
}

int main() {
    int cases; cin >> cases;
    while (cases--) {
        int day, month, year; char aux;
        cin >> day >> aux >> month >> aux >> year;
        if (day == DAY && month == MONTH) 
            cout << DAY_MONTH << toDate(year + 4) << "\n";
        else {
            int reminder = year % 4;
            if (reminder == 0)
                cout << DAY_MONTH << toDate(year) << "\n";
            else
                cout << DAY_MONTH << toDate(year + 4 - reminder) << "\n";
        }
    }
    return 0;
}