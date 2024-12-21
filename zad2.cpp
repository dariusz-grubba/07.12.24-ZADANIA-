#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//ZADANIE 5.2

void printTable(const vector<vector<int>>& table) {
    for (const auto& row : table) {
        for (const auto& elem : row) {
            cout << setw(4) << elem;
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Podaj liczbe wierszy tablicy: ";
    cin >> rows;
    cout << "Podaj liczbe kolumn tablicy: ";
    cin >> cols;

    vector<vector<int>> table(rows, vector<int>(cols));

    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }

    cout << "\nTablica wejsciowa:\n";
    printTable(table);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols / 2; ++j) {
            swap(table[i][j], table[i][cols - j - 1]);
        }
    }

    cout << "\nTablica wyjsciowa:\n";
    printTable(table);

    return 0;
}
