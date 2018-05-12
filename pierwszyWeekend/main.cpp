#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
#include <limits>

//using namespace std; //dodawał możliwość nie używania std - przestrzeń nazw.

void sredniaWazona() {
    //średnia ważona
    int a1 = 8;
    int a2 = 5;

    int b1 = 6;
    int b2 = 2;

    int c1 = 3;
    int c2 = 1;

    float resultOfMean = ((a1 * a2) + (b1 * b2) + (c1 * c2)) / (float) (a2 + b2 + c2);
    std::cout << (resultOfMean) << std::endl;
}

void poleTrapezu() {
    float a;
    float b;
    float h;
    float wynik;

    std::cout << "Podal długosc podsatwy 1 trapezu: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Podaj długosc podstawy 2 trapezu: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Podaj wysokosc trapezu: ";
    std::cin >> h;

    wynik = (a + b) * h / 2;

    std::cout << "Twój trapez ma pole: " << wynik << std::endl;

}

bool isPrimal(int n) {
    if (n < 2)
        return false;

    int i{2};
    bool isP{true};
    while (i < n && isP) {

        n%i++==0 ? isP = false : isP;
    }
    return isP;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    //cout << "Hellow, World (with namespace)" <<endl;
    std::cout << "Mateusz Lojewski" << std::endl;
    std::cout << "06,06,06" << std::endl;

    float numberA(384.959515684F);
    double numerB(155.1564897423);
    int numberInteger(64);
    char characterFromInt;
    char smallLetter('e');


    //sprawdzanie wielkości typów danych
    /*
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long int) << std::endl;
    std::cout << sizeof(short int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(signed int) << std::endl;
    std::cout << sizeof(unsigned int) << std::endl;
    */

    //sprawdzanie precyzji
    /*
    std::cout << numberA << std::endl;
    std::cout << numerB << std::endl;

    std::cout << std::setprecision(11) << numberA << std::endl;
    std::cout << std::setprecision(11) << numerB << std::endl;
    */

//    numberInteger=numberA;
//    std::cout << numberInteger << std::endl;

    /*
    characterFromInt = numberInteger;
    std::cout << "Jaki znak jest przypisany do numeru 64: " << characterFromInt << std::endl;

    std::cout << smallLetter << std::endl;

    smallLetter++;

    std::cout << smallLetter << std::endl;
    */

    //sprawdzanie wyniku dzdielenia i stratności rzutowania niejawnego
    /*
    std::cout << 7 / 2 << std::endl;
    std::cout << 7.0 / 2 << std::endl;
    std::cout << 7 / 2.0 << std::endl;
    */

    // sredniaWazona();

    //dzielenie roku przez mój wiek
//    std::cout << 2018 % 25 << std::endl;

    /* int a{5};

     //PRE
     std::cout << --a << " " << a << std::endl;
     std::cout << ++a << " " << a << std::endl;
     //POST
     std::cout << a-- << " " << a << std::endl;
     std::cout << a++ << " " << a << std::endl;*/


    //zabawa operatorami logicznymmi
    /*
    int varibleA{5};
    int variableB{6};

    boolean wynik;

    wynik = varibleA < variableB;

    std::cout << wynik << std::endl;

    wynik = varibleA > variableB;

    std::cout << wynik << std::endl;

    wynik = varibleA < variableB || variableB!=8;

    std::cout << wynik << std::endl;
    */

//    std::cout << "Wartosc a: " << a << std::endl;
//    std::cin >> a;
//    std::cout << "Nowa wartosc a: " << a << std::endl;

    // poleTrapezu();

    //dzielenie
    /*int divident;
    int divider;
    int result;

    std::cout << "Podaj dzielna" << std::endl;
    std::cin >> divident;
    std::cout << "Podaj dzielniik" << std::endl;
    std::cin >> divider;
    if (divider != 0) {
        result = divident / divider;
        std::cout << "Wynik dzielenia to: " << result << std::endl;
    } else
        std::cout << "Nie mozna dzielic przez zero" << std::endl;*/


    //zgadywanie pierwszej litery mojego imienia
    /*
    char firstLetterOfName;
    std::cout << "Zgadnij pieerwszą litere mojego iminia:" << std::endl;
    std::cin >> firstLetterOfName;
    if (firstLetterOfName == 'M' || firstLetterOfName == 'm')
        std::cout << "Zgadles!!!";
    else
        std::cout << "Nie trafiles ;/" << std::endl;
    */

    // zgadywanie pi
    /*
    float temp;
    float pi{3.141592};
    float epsilon{0.001};
    std::cout << "Podaj liczbe PI" << std::endl;
    std::cin >> temp;

    if (temp <= (pi + epsilon) || temp >= (pi - epsilon))
        std::cout << "Zgadles" << std::endl;
    else
        std::cout << "Nie zgadles" << std::endl;
    */

    // zabawa na liczbach z pętlą if-else-if
    /*
    int liczba;
    std::cout << "Podaj liczbę:" << std::endl;
    std::cin >> liczba;
    if (liczba > 100) {
        std::cout << "Liczba jest za dużą" << std::endl;
    } else if (liczba < 10) {
        std::cout << "Liczba jest za mała" << std::endl;
    } else if (liczba % 9 == 0) {
        std::cout << "Liczba jest zła" << std::endl;
    }
    */

    //znajduje największa liczbę z trzech
    /*   int liczbaPierwsza;
       int liczbaDruga;
       int liczbaTrzecia;

       std::cout << "Podaj trzy liczby całkowite" << std::endl;

       std::cin >> liczbaPierwsza >> liczbaDruga >> liczbaTrzecia;
   //    std::cin >> liczbaDruga;
   //    std::cin >> liczbaTrzecia;

       if ((liczbaPierwsza == liczbaDruga) && (liczbaPierwsza == liczbaTrzecia))
           std::cout << "Wszystkie liczby są rowne" << std::endl;
       else if (liczbaPierwsza >= liczbaDruga && liczbaPierwsza >= liczbaTrzecia) {
           liczbaPierwsza == liczbaDruga ? std::cout << "Liczba pierwsza i druga sa takie same" << std::endl :
               std::cout << "Liczba pierwsza i trzecia sa takie same" << std::endl; // to daje zawsze jedną z dwuch opcji
           std::cout << "Liczba najwieksza to: " << liczbaPierwsza << std::endl;
       } else if (liczbaDruga >= liczbaTrzecia) {
           if (liczbaDruga == liczbaTrzecia)
               std::cout << "Liczba druga i trzecia sa takie same" << std::endl;
           std::cout << "Liczba największa to: " << liczbaDruga << std::endl;
       } else
           std::cout << "Liczba największa to: " << liczbaTrzecia << std::endl;
   */

    // kalkulator miejsc zerowych
    /*  int a;
      int b;
      int c;
      float x1;
      float x2;

      std::cout << "Podaj wspolczynniki rownania" << std::endl;

      std::cin >> a >> b >> c;

      if (a == 0 && b != 0)
          std::cout << "Miejscem zerowym jest " << ((float) c / b) << std::endl;
      else if (a == 0 && b == 0)
          std::cout << "Brak miejsc zerowych - funkcja jest stala" << std::endl;
      else {
          float delta{(float) (b * b - 4 * a * c)};
          if (delta > 0 && a > 0) {
              x1 = (-b - sqrtf(delta)) / (2 * a);
              x2 = (-b + sqrtf(delta)) / (2 * a);

              std::cout << "Funkcja ma dwa miejsca zerowe: " << x1 << " i " << x2 << std::endl;
          } else if (delta == 0 && a > 0) {
              x1 = -b / (2 * a);
              std::cout << "Funkcja ma tylko jedno miejsce zerowe: " << x1 << std::endl;
          } else
              std::cout << "Brak miejsc zerowych - delta ujemna" << std::endl;
      }
  */

    //prosty kalkulator
    /*char op;
    float firstNum;
    float secondNum;
    char stopSign;

    while (stopSign != 'k') {
        std::cout << "Podaj działanie" << std::endl;

        std::cin >> firstNum >> op >> secondNum;
        if (op == 'k') {
            stopSign = 'k';
            continue;
        }

        switch (op) {
            case '+':
                std::cout << "Wynik: " << firstNum + secondNum << std::endl;
                break;
            case '-':
                std::cout << "Wynik: " << firstNum - secondNum << std::endl;
                break;
            case '*':
                std::cout << "Wynik: " << firstNum * secondNum << std::endl;
                break;
            case '/':
                if (secondNum != 0)
                    std::cout << "Wynik: " << firstNum - secondNum << std::endl;
                else
                    std::cout << "Podąles zly dzielnik" << std::endl;
                break;
            default:
                std::cout << "Podales zle parametry wejsciowe" << std::endl;
        }
        //dodanie czyszczenia buforu rozwiązuje problem pętli nieskończonej
        //jak sprawdzić czemu. jak odczytać bufor?
        //http://www.cplusplus.com/forum/beginner/62834/
        //https://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Wcisnij dowolny przycisk aby kontynuowac lub k aby skonczyc" << std::endl;
        std::cin >> stopSign;
    }*/

    //słowna reprezentacja ocen
    /* float mark;
     std::cout << "Podaj ocene" << std::endl;
     std::cin >> mark;

     mark *= 10;
     if (mark > 55 || mark < 20)
         return 0;
     switch ((int) mark) {
         case 20:
             std::cout << "Dopuszczajacy" << std::endl;
             break;

         case 30:
             std::cout << "Dostateczny" << std::endl;
             break;
         case 35:
             std::cout << "Dostateczny+" << std::endl;
             break;
         case 40:
             std::cout << "Dobry" << std::endl;
             break;
         case 45:
             std::cout << "Dobey+" << std::endl;
             break;
         case 50:
             std::cout << "Bardzo dobry" << std::endl;
             break;
         case 55:
             std::cout << "Bardzo dobry+" << std::endl;
             break;
         default:
             std::cout << "Nie znana ocena" << std::endl;
     }*/

    //imiona na litere
    /*std::cout << "Poddaj pierwsza litere imienia" << std::endl;
    char letter;
    std::cin >> letter;
    switch (letter) {
        case 'a':
        case 'A':
            std::cout << "Anna" << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "Basia" << std::endl;
            break;
        case 'c':
        case 'C':
            std::cout << "Celina" << std::endl;
            break;
        default:
            std::cout << "Nie chciało mi się robic więcej liter ;p" << std::endl;
    }
*/
    //operator trój arguymentowy
    /*int num;
    std::cout << "Podaj liczbę" << std::endl;
    std::cin >> num;
    std::cout << (num < 0 ? num *= -1 : num) << std::endl;

    std::cout << "Podaj pin" << std::endl;
    std::cin >> num;
    std::cout << (num == 1234 ? "Znasz pin" : "Nie znasz pinu") << std::endl;

    std::cout << "Podaj rok urodzenia" << std::endl;
    std::cin >> num;
    std::cout << ((num%400 ==0 ? true : (num%4 == 0 && num%100 != 0 ))?
                  "Urodziles sie w roku przestepnym" : "Nie urodziles sie w roku przestepnym") << std::endl;
*/
    //wyświetla liczbę która jest mniejsza od zera
    int n;
    do {
        std::cout << "Podaj liczbe" << std::endl;
        std::cin >> n;
    } while (n < 0);

    //obliczanie sumy liczb
    std::cout << "Podaj liczbe, dla ktorej policzyc sume" << std::endl;
    std::cin >> n;

    int i{0};
    int wynik{0};
    while (i < n) {
        ++i;
        wynik += i;
    }
    std::cout << wynik << std::endl;

    //sprawdza czy liczba jest pierwsza
    std::cout << "Podaj liczbe do sprawdzenia" << std::endl;
    std::cin >> n;
    std::cout << "Twoja liczba jest liczba " << isPrimal(n) << std::endl;
    return 0;
}