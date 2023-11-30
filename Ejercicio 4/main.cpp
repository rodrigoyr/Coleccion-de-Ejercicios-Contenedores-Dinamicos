#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Valores originales: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::valarray<double> sumaValores = valores + 5.0;
    std::valarray<double> restaValores = valores - 2.0;
    std::valarray<double> multiplicacionValores = valores * 3.0;
    std::valarray<double> divisionValores = valores / 2.0;

    std::cout << "Valores + 5.0: ";
    for(double valor : sumaValores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Valores - 2.0: ";
    for(double valor : restaValores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Valores * 3.0: ";
    for(double valor : multiplicacionValores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Valores / 2.0: ";
    for(double valor : divisionValores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
