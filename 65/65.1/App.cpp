#include <iostream>

char getOper() {
  char oper;
  while (true) {
    std::cin >> oper;

    if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%')
      return oper;

    std::cout << '\n';
    std::cout << "error: The operator is incorrect. Available operators: +, -, "
                 "*, / or %.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

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

void printResult(const int &result) {
  std::cout << "Result: " << result << "\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the two numbers.\n"
               "> ";
  int value1;
  std::cin >> value1;

  std::cout << "> ";
  int value2;
  std::cin >> value2;
  std::cout << '\n';

  std::cout << "// Enter the operator.\n"
               "> ";
  char oper = getOper();
  std::cout << '\n';

  int result = setResult(value1, value2, oper);

  printResult(result);
  return 0;
}