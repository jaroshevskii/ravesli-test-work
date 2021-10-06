#include <iostream>

#include "Get.h"

struct Fraction {
  int numerator;   // Знаменник
  int denominator; // Чисельник
};

/// Отримати дріб.
void getFraction(Fraction &fraction) {
  std::cout << "> numerator = ";
  getInt(fraction.numerator);

  std::cout << "> denominator = ";
  getInt(fraction.denominator);
  std::cout << '\n';
}

/// Задати результат множення.
double setMultiplyResult(const Fraction &value1, const Fraction &value2) {
  return (value1.numerator * value2.numerator) /
         (value1.denominator * value2.denominator);
}

/// Вивести результат множення.
void printMultiplyResult(const double &multiplyResult) {
  std::cout << "Multiply result: " << multiplyResult << "\n";
  std::cout << '\n';
}

int main() {
  Fraction value1;
  getFraction(value1);

  Fraction value2;
  getFraction(value2);

  const double multiplyResult = setMultiplyResult(value1, value2);

  printMultiplyResult(multiplyResult);
  return 0;
}