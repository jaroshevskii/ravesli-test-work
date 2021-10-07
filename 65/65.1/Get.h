#ifndef GET_H
#define GET_H

#include <iostream>

/// Отримати ціле число.
void getInt(int &number) {
  std::cin >> number;
}

/// Отримати символ.
void getChar(char &symbol) {
  std::cin >> symbol;
}

#endif // GET_H