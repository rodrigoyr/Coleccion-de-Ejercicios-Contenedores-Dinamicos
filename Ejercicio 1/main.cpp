#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for (const auto &numero : numeros) {
        std::cout << numero << std::endl;
    }

    return 0;
}
