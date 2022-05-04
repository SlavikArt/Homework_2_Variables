#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    float varOne;
    float varTwo;

    cout << "Введите значение первой переменной: ";
    cin >> varOne;

    cout << "Введите значение второй переменной: ";
    cin >> varTwo;

                              // Пример: varOne = 10, varTwo = 35 
    varOne += varTwo;         // varOne = 10 + 35 = 45
    varTwo = varOne - varTwo; // varTwo = 45 - 35 = 10
    varOne -= varTwo;         // varOne = 45 - 10 = 35
                              // Вывод: varOne = 35, varTwo = 10

    cout << "\nЗначение первой переменной: " << varOne << "\n";
    cout << "Значение второй переменной: " << varTwo << "\n";
}