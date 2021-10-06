#ifndef GET_H
#define GET_H

#include <iostream>

/// Отримати ціле число.
void getInt(int &number) {
  std::cin >> number;
}

/// Отримати оператор.
char getChar(char &symbol) {
  while (true) {
    std::cin >> symbol;

    switch (symbol) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
      return symbol;
    }

    std::cout << '\n';
    std::cout << "ERROR: The symbol is incorrect. Available symbols: +, -, "
                 "*, / or %.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

#endif