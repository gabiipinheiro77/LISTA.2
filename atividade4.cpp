#include <iostream>
using namespace std;

// Troca os valores de a e b usando passagem por referência
void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Digite o valor de a: ";
    cin >> x;
    cout << "Digite o valor de b: ";
    cin >> y;

    cout << "Antes: a = " << x << ", b = " << y << endl;
    trocar(x, y);
    cout << "Depois: a = " << x << ", b = " << y << endl;
    return 0;
}
