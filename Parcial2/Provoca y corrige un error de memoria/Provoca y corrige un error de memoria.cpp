#include <iostream>

using namespace std;

int main() {

    int valor = 10;
    int* numero = &valor;

    cout << *numero << endl;

    return 0;
}