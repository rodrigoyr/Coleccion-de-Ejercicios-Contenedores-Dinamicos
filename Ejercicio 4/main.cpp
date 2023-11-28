#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    double suma = valores.sum();
    double media = suma / valores.size();

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Media: " << media << std::endl;

    valores += 5.0;

    std::cout << "Valores + 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
