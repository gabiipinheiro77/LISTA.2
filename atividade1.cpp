#include <iostream>
using namespace std;

// Retorna a média aritmética de três notas
float media(float a, float b, float c) {
    return (a + b + c) / 3.0f;
}

int main() {
    float n1, n2, n3;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;

    cout << "Média: " << media(n1, n2, n3) << endl;
    return 0;
}
