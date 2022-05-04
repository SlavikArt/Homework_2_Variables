#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    float varOne;
    float varTwo;
    float varCell;

    cout << "Введите значение первой переменной: ";
    cin >> varOne;

    cout << "Введите значение второй переменной: ";
    cin >> varTwo;

    varCell = varOne; // В ячейку записываем переменную 1
    varOne = varTwo;  // Присваиваем первой переменной значение второй
    varTwo = varCell; // Присваиваем второй переменной значение ячейки (1 переменная)

    cout << "\nЗначение первой переменной: " << varOne << "\n";
    cout << "Значение второй переменной: " << varTwo << "\n";
}