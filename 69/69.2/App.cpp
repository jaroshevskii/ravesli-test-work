#include <iostream>

#include "Get.h"

/// Задати суму до числа.
int setSumToNumber(const int &number) {
  int sumToNumber = 0;
  for (int count = 1; count <= number; ++count)
    sumToNumber += count;
  return sumToNumber;
}

/// Вивести суму до числа.
void printSumToNumber(const int &sumToNumber) {
  std::cout << "Sum to number: " << sumToNumber << "\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the integer.\n"
               "> ";
  int number;
  getInt(number);
  std::cout << '\n';

  const int sumToNumber = setSumToNumber(number);

  printSumToNumber(sumToNumber);
  return 0;
}