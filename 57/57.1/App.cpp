#include <iostream>
#include <string>

int main() {
  std::cout << "// Enter your full name.\n"
               "> ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << '\n';

  std::cout << "// Enter your age.\n"
               "> ";
  int age;
  std::cin >> age;
  std::cout << '\n';

  double livedYears = static_cast<double>(age) / name.length();

  std::cout << "You've lived " << livedYears
            << " years for each letter in your name.\n";
  std::cout << '\n';
  return 0;
}