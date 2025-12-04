#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;
    int sum = 0;

    while (true) {
        cout << "[ + ] Введите число: ";
        cin >> number;

        if (number == 0) {
            break; // завершение цикла при вводе 0
        }

        count++;
        sum += number;
    }

    cout << "[ + ] Количество чисел: " << count << endl;
    cout << "[ + ] Сумма: " << sum << endl;

    return 0;
}
