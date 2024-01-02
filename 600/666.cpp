#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void resuelveCaso() {
    string frase1, frase2; string f1 = "", f2 = "";
    getline(cin, frase1);
    getline(cin, frase2);
    int i = 0, j = 0; bool iguales = true;
    while ((i < frase1.length() || j < frase2.length()) && iguales) {
        if (i < frase1.length()) {
            if (frase1.at(i) == ' ' || frase1.at(i) == '.' || frase1.at(i) == ',') {
                //i++;
            }
            else { f1 += tolower(frase1.at(i)); }
        }
        if (j < frase2.length()) {
            if (frase2.at(j) == ' ' || frase2.at(j) == '.' || frase2.at(j) == ',') {
                //j++;
            }
            else { f2 += tolower(frase2.at(j)); }
        }
        /*if ((frase1.at(i) == ' ' || frase1.at(i) == '.' || frase1.at(i) == ',') &&
            (frase2.at(j) == ' ' || frase2.at(j) == '.' || frase2.at(j) == ',')) {
            i++; j++;
        }
        else { f1 += frase1.at(i); f2 += frase2.at(j); }*/
        if (f1.length() == f2.length())
            iguales = f1 == f2;
        if (iguales) { i++; j++; }
        //if (i < frase1.length()) i++;
        //if (j < frase2.length()) j++;
    }
    /*for (int i = 0; i < frase1.length(); i++) {
        if (frase1.at(i) != ' ' && frase1.at(i) != '.' && frase1.at(i) != ',') {
            f1 += tolower(frase1.at(i));
        }
    }
    for (int j = 0; j < frase2.length(); j++) {
        if (frase2.at(j) != ' ' && frase2.at(j) != '.' && frase2.at(j) != ',') {
            f2 += tolower(frase2.at(j));
        }
    }*/
    if (iguales/*f1 == f2*/) { cout << "SI\n"; }
    else { cout << "NO\n"; }
}

int main() {


    unsigned int numCasos;
    cin >> numCasos;
    string aux; 
    getline(cin, aux);
    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }


    return 0;
}