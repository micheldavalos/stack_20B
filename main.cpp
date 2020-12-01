#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    pila.push(-1);

    for (size_t i = 0; i < 10; i++)
    {
        pila.push(i);
    }

    cout << "tamaño: " << pila.size() << endl;
    cout << "tope: " << pila.top() << endl;

    stack<int> copia(pila);

    while (!copia.empty())
    {
        // int &e = copia.top();
        auto const &e = copia.top();

        cout << e << endl;

        copia.pop();
    }

    cout << "tam pila: " << pila.size() << endl;
    cout << "tam copia: " << copia.size() << endl;
    
    return 0;
}