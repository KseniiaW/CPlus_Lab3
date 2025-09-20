#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include "functions.h"
using namespace std;

// ������� 1: �������� �����
bool validateSNILS(const string& snils) {
    string clean_snils;

    // ������� ������� � ������, ��������� �� ������������ �������
    for (char c : snils) {
        if (c == ' ' || c == '-') {
            continue; // ���������� ������� � ������
        }
        if (!isdigit(c)) {
            return false; // ������ ������������ ������
        }
        clean_snils += c;
    }

    // �������� �����
    if (clean_snils.length() != 11) {
        return false;
    }

    // �������� �� ��� ���������� ����� ������ (������ 9 ����)
    for (int i = 0; i < 7; i++) {
        if (clean_snils[i] == clean_snils[i + 1] && clean_snils[i] == clean_snils[i + 2]) {
            return false;
        }
    }

    // ������ ����������� �����
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int digit = clean_snils[i] - '0';
        sum += digit * (9 - i);
    }

    // ������ ������������ �����
    int control_number;
    if (sum < 100) {
        control_number = sum;
    }
    else if (sum == 100 || sum == 101) {
        control_number = 0;
    }
    else {
        int remainder = sum % 101;
        if (remainder < 100) {
            control_number = remainder;
        }
        else {
            control_number = 0;
        }
    }

    // ��������� ���������� ������������ �����
    int input_control = (clean_snils[9] - '0') * 10 + (clean_snils[10] - '0');

    return control_number == input_control;
}

// ������� 2: ���������� ������
double cubeRootPow(double x) {
    if (x < 0) {
        return -pow(-x, 1.0 / 3.0);
    }
    return pow(x, 1.0 / 3.0);
}

double cubeRootIterative(double x) {
    if (x == 0) return 0;

    double guess = x; // ��������� �������������
    double precision = 1e-10;
    double previous;

    do {
        previous = guess;
        guess = (2 * guess + x / (guess * guess)) / 3;
    } while (abs(guess - previous) > precision);

    return guess;
}

// ������� 3: ������� ������������
double triangleArea(double side) {
    // ������� ��������������� ������������
    return (sqrt(3) / 4) * side * side;
}

double triangleArea(double a, double b, double c) {
    // ������� �� ������� ������
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// ������� 4: ����������� ����� ����
int recursiveSum(int n) {
    if (n == 1) {
        return 5;
    }
    return 5 * n + recursiveSum(n - 1);
}

// ������� 5: ������� � �������� �������
void decimalToBinaryRecursive(int num) {
    if (num > 1) {
        decimalToBinaryRecursive(num / 2);
    }
    cout << num % 2;
}

string decimalToBinary(int num) {
    if (num == 0) return "0";
    if (num == 1) return "1";
    return decimalToBinary(num / 2) + to_string(num % 2);
}