#include <iostream>
using namespace std;

// Procedimento que desenha uma linha de 30 traços
void imprimirLinha() {
    for (int i = 0; i < 30; i++) {
        cout << "-";
    }
    cout << endl;
}

int main() {
    cout << "Exemplo de uso do procedimento imprimirLinha:" << endl;
    imprimirLinha();
    cout << "Conteudo entre linhas" << endl;
    imprimirLinha();
    return 0;
}
