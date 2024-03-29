#include <iostream>

enum class Animal { PIG, CHICKEN, GOAT, CAT, DOG, OSTRICH };

/// Отримати тварину.
std::string getAnimal(const Animal &animal) {
  switch (animal) {
  case Animal::CAT:
    return "Cat";
  case Animal::CHICKEN:
    return "Chicken";
  case Animal::DOG:
    return "Dog";
  case Animal::GOAT:
    return "Goat";
  case Animal::OSTRICH:
    return "Ostrich";
  case Animal::PIG:
    return "Pig";
  default:
    return "Unknown";
  }
}

/// Отримати кількість ніг.
int getNumberOfLegs(const Animal &animal) {
  switch (animal) {
  case Animal::CHICKEN:
  case Animal::OSTRICH:
    return 2;
  case Animal::CAT:
  case Animal::DOG:
  case Animal::GOAT:
  case Animal::PIG:
    return 4;
  default:
    return 0;
  }
}

/// Вивести тварину.
void printAnimal(const Animal &animal) {
  std::cout << "Animal: " << getAnimal(animal) << "\n"
            << "Number of legs: " << getNumberOfLegs(animal) << "\n";
  std::cout << '\n';
}

int main() {
  printAnimal(Animal::CAT);

  printAnimal(Animal::CHICKEN);
  return 0;
}