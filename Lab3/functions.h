#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

// ������� 1
bool validateSNILS(const std::string& snils);

// ������� 2
double cubeRootPow(double x);
double cubeRootIterative(double x);

// ������� 3
double triangleArea(double side); // ��������������
double triangleArea(double a, double b, double c); // ��������������

// ������� 4
int recursiveSum(int n);

// ������� 5
void decimalToBinaryRecursive(int num);
std::string decimalToBinary(int num);

#endif#pragma once
