#include <iostream>

#include "Get.h"

/// Отримати оператор.
void getOper(char &oper) {
  while (true) {
    getChar(oper);

    switch (oper) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
      return;
    }

    std::cout << '\n';
    std::cout << "ERROR: The operator is incorrect. Available operators: +, -, "
                 "*, / and %.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
                 "> ";
  }
}

/// Задати результат.
int setResult(const int &value1, const int &value2, const char &oper) {
  switch (oper) {
  case '+':
    return value1 + value2;
  case '-':
    return value1 - value2;
  case '*':
    return value1 * value2;
  case '/':
    return value1 / value2;
  case '%':
    return value1 % value2;
  default:
    return 0;
  }
}

/// Вивести результат.
void printResult(const int &result) {
  std::cout << "Result: " << result << "\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the two integers.\n"
               "> ";
  int value1;
  getInt(value1);

  std::cout << "> ";
  int value2;
  getInt(value2);
  std::cout << '\n';

  std::cout << "// Enter the operator.\n"
               "> ";
  char oper;
  getOper(oper);
  std::cout << '\n';

  const int result = setResult(value1, value2, oper);

  printResult(result);
  return 0;
}