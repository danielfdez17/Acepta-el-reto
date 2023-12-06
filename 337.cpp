#include <iostream>
using namespace std;

void casoDePrueba() {
	const int DIENTES = 6;
    bool encaja = true;
    int longitud_Diente, i = 0;
	typedef int tDientes[DIENTES];
	tDientes dientesSuperiores, dientesInferiores, total;
    for (int i = 0; i < DIENTES; i++) {
        cin >> longitud_Diente;
        dientesSuperiores[i] = longitud_Diente;
    }
        for (int i = 0; i < DIENTES; i++) {
        cin >> longitud_Diente;
        dientesInferiores[i] = longitud_Diente;
    }
	while ((encaja) && (i < DIENTES - 1)) {
     total[i] = dientesSuperiores[i] + dientesInferiores[i];
     total[i + 1] = dientesSuperiores[i + 1] + dientesInferiores[i + 1];
        if (total[i] != total[i + 1]) {
            encaja = false;
        }
        i++;
    }
    if (encaja == true)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;
	
}
int main() {
	unsigned int numCasos, i;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++)
		casoDePrueba();
	return 0;
}