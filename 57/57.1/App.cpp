#include <iostream>
#include <string>

#include "Get.h"

/// Задати прожиті роки.
double setLivedYears(const std::string &name, const int &age) {
  return static_cast<double>(age) / name.length();
}

/// Вивести прожиті роки.
void printLivedYears(const double &livedYears) {
  std::cout << "You've lived " << livedYears
            << " years for each letter in your name.\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter your full name.\n"
               "> ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << '\n';

  std::cout << "// Enter your age.\n"
               "> ";
  int age;
  getInt(age);
  std::cout << '\n';

  const double livedYears = setLivedYears(name, age);
  
  printLivedYears(livedYears);
  return 0;
}