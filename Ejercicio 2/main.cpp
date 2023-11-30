#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);
    std::cout << "Operaciones en la pila:" << std::endl;
    std::cout << "Top de la pila: " << pila.top() << std::endl;

    pila.push(6.6);
    std::cout << "Elemento agregado a la pila: " << pila.top() << std::endl;

    pila.pop();
    std::cout << "Elemento quitado de la pila. Nuevo top: " << pila.top() << std::endl;

    return 0;
}
