#include <iostream>
using namespace std;

// Calcula a área do retângulo
float calcularArea(float base, float altura) {
    return base * altura;
}

// Exibe o resultado formatado
void exibirArea(float base, float altura, float area) {
    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area do retangulo: " << area << endl;
}

int main() {
    float base, altura;
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    float area = calcularArea(base, altura);
    exibirArea(base, altura, area);
    return 0;
}
