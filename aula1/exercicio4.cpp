#include <iostream>
using namespace std;

int main() {
    // Valores já definidos no código
    double baseMaior = 10, baseMenor = 6, altura = 4, area;

    area = ( (baseMaior + baseMenor) * altura ) / 2;

    cout << "Base maior: " << baseMaior << endl;
    cout << "Base menor: " << baseMenor << endl;
    cout << "Altura: " << altura << endl;
    cout << "Área do trapézio = " << area << endl;

    return 0;
}
