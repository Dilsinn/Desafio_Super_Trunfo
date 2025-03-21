#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Classe para representar uma carta
class Carta {
public:
    string nome;
    int atributo1, atributo2, atributo3;

    Carta(string n, int a1, int a2, int a3) : nome(n), atributo1(a1), atributo2(a2), atributo3(a3) {}

    void exibirCarta() {
        cout << "Nome: " << nome << endl;
        cout << "Atributo 1: " << atributo1 << endl;
        cout << "Atributo 2: " << atributo2 << endl;
        cout << "Atributo 3: " << atributo3 << endl;
    }
};

int main() {
    // Criar algumas cartas
    Carta carta1("Dragao Vermelho", 80, 60, 90);
    Carta carta2("Golem de Pedra", 70, 85, 75);

    // Exibir as cartas
    cout << "Carta 1:" << endl;
    carta1.exibirCarta();
    cout << endl;

    cout << "Carta 2:" << endl;
    carta2.exibirCarta();
    cout << endl;

    // Escolher atributo para comparação
    int escolha;
    cout << "Escolha o atributo para comparar (1, 2 ou 3): ";
    cin >> escolha;

    // Comparar cartas
    if (escolha == 1) {
        if (carta1.atributo1 > carta2.atributo1)
            cout << carta1.nome << " vence!" << endl;
        else if (carta1.atributo1 < carta2.atributo1)
            cout << carta2.nome << " vence!" << endl;
        else
            cout << "Empate!" << endl;
    } else if (escolha == 2) {
        if (carta1.atributo2 > carta2.atributo2)
            cout << carta1.nome << " vence!" << endl;
        else if (carta1.atributo2 < carta2.atributo2)
            cout << carta2.nome << " vence!" << endl;
        else
            cout << "Empate!" << endl;
    } else if (escolha == 3) {
        if (carta1.atributo3 > carta2.atributo3)
            cout << carta1.nome << " vence!" << endl;
        else if (carta1.atributo3 < carta2.atributo3)
            cout << carta2.nome << " vence!" << endl;
        else
            cout << "Empate!" << endl;
    } else {
        cout << "Escolha inválida!" << endl;
    }

    return 0;
}
