#include <iostream>
#include <iomanip>
#include <math.h>

int wartBezwzgledna(int a) { return a < 0 ? -a : a; }

int readStandartIoInt() {
    int a;
    std::cout << "Podaj liczbę całkowita" << std::endl;
    std::cin >> a;
    return a;
}

int najwiekszyWspolnyDzielnik(int a, int b) {
    int n;
    while (b) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int sumOfComprimeIntegers(int a) {
    int sum{0};
    for (int i{a - 1}; i > 0; --i) {
        najwiekszyWspolnyDzielnik(a, i) == 1 ? sum += i : sum;
    }
    return sum;
}

void znajdzSumeKwadratow(int n) {
    for (int i{0}; i <= sqrtf(n/2); i++) {
        if ((int) sqrtf(n - i * i) == sqrtf(n - i * i))
            std::cout << i << "^2 + " << sqrtf(n - i * i) << "^2" << std::endl;
    }
    /*for (int i{0}; i < n/2; i++) {
        if ((int) sqrtf(i) == sqrtf(i) && (int) sqrtf(n - i) == sqrtf(n - i))
            std::cout << sqrtf(i) << "^2 + " << sqrtf(n - i) << "^2" << std::endl;
    }*/
}


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

    //suma dzielników całkowitych
    /*int liczbaSuma;
    int wynikSuma{0};
    std::cout << "Podaj liczbe do sprawdzenia" << std::endl;
    std::cin >> liczbaSuma;

    for (int i = liczbaSuma; i > 0; i--) {
        if (liczbaSuma % i == 0)
            wynikSuma += i;
    }
    std::cout << wynikSuma << std::endl;*/

    //wyświetlanie co drugiej liczby
    /* int liczbaPodana;
     std::cout << "Podaj liczbe" << std::endl;
     std::cin >> liczbaPodana;
     for (int i{0};; i++) {
         if (i == liczbaPodana)
             break;
         if (i % 2 == 0)
             std::cout << i << std::endl;
         continue;
     }*/

    //zabawa z zasięgiem zmiennych
    /*for (int i{0}; i < 1; i++) {
        for (int i{10}; i < 15 && i >= 10; i++) {
            std::cout << "jestem w wewnetrznej petli" << i << std::endl;
        }
    }

    int lubiePlacki{10};
    {
        int lubiePlacki{100};
        std::cout << lubiePlacki << std::endl;
    }*/

    /*std::cout << wartBezwzgledna(10) << std::endl;
    std::cout << wartBezwzgledna(-10) << std::endl;

    std::cout << sumOfComprimeIntegers(readStandartIoInt()) << std::endl;*/

    znajdzSumeKwadratow(100);

    return 0;
}