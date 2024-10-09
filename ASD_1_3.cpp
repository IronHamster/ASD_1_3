#include <iostream>

int main() {
    int liczba;
    int Min, PozycjaMin;
    int Max, PozycjaMax;
    int Pozycja = 1;

    if (std::cin >> liczba) {
        Min = Max = liczba;
        PozycjaMin = PozycjaMax = Pozycja;

        while (std::cin >> liczba) {
            ++Pozycja;
            if (liczba < Min) {
                Min = liczba;
                PozycjaMin = Pozycja;
            }
            if (liczba > Max) {
                Max = liczba;
                PozycjaMax = Pozycja;
            } else if (liczba == Max) {
                PozycjaMax = Pozycja;
            }
        }

        std::cout << Min << std::endl;
        std::cout << PozycjaMin << std::endl;
        std::cout << Max << std::endl;
        std::cout << PozycjaMax << std::endl;
    }

    return 0;
}
