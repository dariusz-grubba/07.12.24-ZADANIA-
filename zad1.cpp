#include <iostream>
#include <vector>
#include <limits>

using namespace std;

//ZADANIE 5.1

int main() {
    int liczbaElementow;
    cout << "Podaj liczbe elementow wektora: " << endl;
    cout << "> ";
    cin >> liczbaElementow;

    if (liczbaElementow <= 0) {
        cout << "Liczba elementow musi byc wieksza od zera!" << endl;
        return 1;
    }

    vector<int> wektor(liczbaElementow);

    cout << "Wielkosc wektora: " << liczbaElementow << endl;
    for (int i = 0; i < liczbaElementow; ++i) {
        cout << "Element " << i + 1 << ":" << endl;
        cout << "> ";
        cin >> wektor[i];
    }

    int maxElement = numeric_limits<int>::min();
    int indeksMax = -1;

    for (int i = 0; i < liczbaElementow; ++i) {
        if (wektor[i] > maxElement) {
            maxElement = wektor[i];
            indeksMax = i;
        }
    }

    cout << "Element maksymalny wektora: " << maxElement << endl;
    cout << "Index elementu maksymalnego: " << indeksMax << endl;

    return 0;
}
