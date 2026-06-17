#include <iostream>
using namespace std;

// Retorna o maior entre dois números inteiros
int maior(int a, int b) {
    if (a >= b) {
        return a;
    }
    return b;
}

int main() {
    int x, y;
    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    cout << "O maior e: " << maior(x, y) << endl;
    return 0;
}
