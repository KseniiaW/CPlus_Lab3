#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

// Задание 1
bool validateSNILS(const std::string& snils);

// Задание 2
double cubeRootPow(double x);
double cubeRootIterative(double x);

// Задание 3
double triangleArea(double side); // равносторонний
double triangleArea(double a, double b, double c); // разносторонний

// Задание 4
int recursiveSum(int n);

// Задание 5
void decimalToBinaryRecursive(int num);
std::string decimalToBinary(int num);

#endif#pragma once
