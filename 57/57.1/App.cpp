#include <iostream>
#include <string>

#include "Get.h"

struct People {
  std::string name; // Ім'я
  int age;          // Вік
};

/// Задати прожиті роки.
double setLivedYears(const People &people) {
  return static_cast<double>(people.age) / people.name.length();
}

/// Вивести прожиті роки.
void printLivedYears(const double &livedYears) {
  std::cout << "You've lived " << livedYears
            << " years for each letter in your name.\n";
  std::cout << '\n';
}

/// Отримати людину.
void getPeople(People &people) {
  std::cout << "// Enter your first and last name in one line.\n"
               "> ";
  std::getline(std::cin, people.name);
  std::cout << '\n';

  std::cout << "// Enter your age.\n"
               "> ";
  getInt(people.age);
  std::cout << '\n';
}

int main() {
  People people;
  getPeople(people);

  const double livedYears = setLivedYears(people);
  
  printLivedYears(livedYears);
  return 0;
}