#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"
using namespace std;

void task1() {
    cout << "\n=== ЗАДАНИЕ 1: ПРОВЕРКА СНИЛС ===" << endl;

    string snils;
    cout << "Введите номер СНИЛС: ";
    getline(cin, snils);

    if (validateSNILS(snils)) {
        cout << "✓ Номер СНИЛС валиден" << endl;
    }
    else {
        cout << "✗ Неверный номер СНИЛС" << endl;
    }
}

void task2() {
    cout << "\n=== ЗАДАНИЕ 2: ВЫЧИСЛЕНИЕ КУБИЧЕСКОГО КОРНЯ ===" << endl;

    double number;
    cout << "Введите число: ";
    cin >> number;

    double result1 = cubeRootPow(number);
    double result2 = cubeRootIterative(number);

    cout << fixed << setprecision(10);
    cout << "Метод pow(x, 1/3): " << result1 << endl;
    cout << "Итерационный метод: " << result2 << endl;
    cout << "Разница: " << abs(result1 - result2) << endl;
}

void task3() {
    cout << "\n=== ЗАДАНИЕ 3: ПЛОЩАДЬ ТРЕУГОЛЬНИКА ===" << endl;

    int choice;
    cout << "Выберите тип треугольника:" << endl;
    cout << "1. Равносторонний" << endl;
    cout << "2. Разносторонний" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;

    if (choice == 1) {
        double side;
        cout << "Введите длину стороны: ";
        cin >> side;
        cout << "Площадь: " << triangleArea(side) << endl;
    }
    else if (choice == 2) {
        double a, b, c;
        cout << "Введите три стороны треугольника: ";
        cin >> a >> b >> c;
        cout << "Площадь: " << triangleArea(a, b, c) << endl;
    }
    else {
        cout << "Неверный выбор!" << endl;
    }
}

void task4() {
    cout << "\n=== ЗАДАНИЕ 4: РЕКУРСИВНАЯ СУММА РЯДА ===" << endl;

    int n;
    cout << "Введите n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n должно быть положительным!" << endl;
        return;
    }

    int sum = recursiveSum(n);
    cout << "S = 5 + 10 + 15 + ... + 5*" << n << " = " << sum << endl;
}

void task5() {
    cout << "\n=== ЗАДАНИЕ 5: ПЕРЕВОД В ДВОИЧНУЮ СИСТЕМУ ===" << endl;

    int number;
    cout << "Введите положительное целое число: ";
    cin >> number;

    if (number < 0) {
        cout << "Число должно быть положительным!" << endl;
        return;
    }

    cout << "Десятичное: " << number << endl;
    cout << "Двоичное: ";
    decimalToBinaryRecursive(number);
    cout << endl;

    // Альтернативный вариант с возвратом строки
    string binary = decimalToBinary(number);
    cout << "Двоичное (строка): " << binary << endl;
}

int main() {
    system("chcp 1251");

    int choice;
    do {
        cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << endl;
        cout << "1. Проверка СНИЛС" << endl;
        cout << "2. Кубический корень" << endl;
        cout << "3. Площадь треугольника" << endl;
        cout << "4. Рекурсивная сумма" << endl;
        cout << "5. Перевод в двоичную систему" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите задание: ";
        cin >> choice;
        cin.ignore(); // Очистка буфера

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 0: cout << "Выход..." << endl; break;
        default: cout << "Неверный выбор!" << endl;
        }

        if (choice != 0) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 0);

    return 0;
}