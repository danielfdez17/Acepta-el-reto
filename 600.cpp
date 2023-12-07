#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void resolver(const vector<vector<int>>&matriz, int f, int c) {
	// <= que los elementos de la fila && >= que los elementos de su columna
	// ||
	// >= que los elementos de la fila && <= que los elementos de su columna
	int fila = 0, columna = 0; bool found = false;
	while (fila < f && !found) {
		columna = 0; found = 0;
		while (columna < c && !found) {
			// <= que la fila && >= que la columna
			int i = 0, j = 0, num = matriz[fila][columna];
			while (i < f && num <= matriz[i][columna] && j < c && num >= matriz[fila][j]) {
				i++; j++;
			}
			found = (i == f && j == c);
			if (!found) {
				// >= que la fila && <= que la columna
				i = 0; j = 0;
				while (i < f && num >= matriz[i][columna] && j < c && num <= matriz[fila][j]) {
					i++; j++;
				}
				found = (i == f && j == c);
			}
			columna++;
		}
		fila++;
	}
	if (found) { cout << "SI\n"; }
	else { cout << "NO\n"; }
}

bool resuelveCaso() {
	int f, c;
	cin >> f >> c;
	if (f == 0 && c == 0) { return false; }
	vector<vector<int>> matriz(f, vector<int>(c));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			cin >> matriz[i][j];
		}
	}
	resolver(matriz, f, c);
	return true;
}


int main() {

	// ajuste para que cin extraiga directamente de un fichero
//#ifndef DOMJUDGE
//	ifstream in("in.txt");
//	auto cinbuf = std::cin.rdbuf(in.rdbuf());
//	//ofstream out("out.txt");
//	//auto coutbuf = std::cout.rdbuf(out.rdbuf());
//#endif

	while (resuelveCaso());

	// restablecimiento de cin
//#ifndef DOMJUDGE
//	cin.rdbuf(cinbuf);
//	//cout.rdbuf(coutbuf);
//	system("pause");
//#endif
	return 0;
}