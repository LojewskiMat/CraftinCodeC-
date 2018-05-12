#include <iostream>
#include <iomanip>

int main() {

    //podaj liczbę dodatnia
    /*  int liczba;
      do {
          std::cout << "Podadj liczbę" << std::endl;
          std::cin >> liczba;
      } while (liczba >= 0);
  */
    //tabliczka mnożenia
/*
    for (int i{1}; i < 15; i++) {
        for (int j{1}; j < 15; j++)
            std::cout << std::right << std::setw(4) << i * j;
        std::cout << "" << std::endl;
    }*/
//liczenie silni
    /*   int liczbaSilnia;
       int wynik{1};
       std::cout << "Podaj liczbe" << std::endl;
       std::cin >> liczbaSilnia;

       for (int i{1}; i <= liczbaSilnia;) {
           wynik *= i++;
       }
       std::cout << wynik << std::endl;*/

    int liczbaSuma;
    int wynikSuma{0};
    std::cout << "Podaj liczbe do sprawdzenia" << std::endl;
    std::cin >> liczbaSuma;

    for (int i = liczbaSuma; i > 0; i--) {
        if (liczbaSuma % i == 0)
            wynikSuma += i;
    }
    std::cout << wynikSuma << std::endl;
    return 0;
}