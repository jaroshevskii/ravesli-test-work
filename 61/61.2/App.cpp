#include <iostream>

struct Fraction {
  int numerator;
  int denominator;
};

void getFraction(Fraction &fraction) {
  std::cout << "> numerator = ";
  std::cin >> fraction.numerator;

  std::cout << "> denominator = ";
  std::cin >> fraction.denominator;
  std::cout << '\n';
}

double setMultiplyResult(const Fraction &value1, const Fraction &value2) {
  return (value1.numerator * value2.numerator) /
         (value1.denominator * value2.denominator);
}

void printMultiplyResult(const double &multiplyResult) {
  std::cout << "Multiply result: " << multiplyResult << "\n";
  std::cout << '\n';
}

int main() {
  Fraction value1;
  getFraction(value1);

  Fraction value2;
  getFraction(value2);

  double multiplyResult = setMultiplyResult(value1, value2);

  printMultiplyResult(multiplyResult);
  return 0;
}