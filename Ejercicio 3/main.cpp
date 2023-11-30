#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    std::sort(numeros.begin(), numeros.end());

    std::cout << "Elementos ordenados del vector:" << std::endl;
    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    auto maxElement = std::max_element(numeros.begin(), numeros.end());
    if (maxElement != numeros.end()) {
        int maxNum = *maxElement;
        std::cout << "Numero maximo: " << maxNum << std::endl;
    } else {
        std::cout << "El vector está vacio." << std::endl;
    }

    return 0;
}
