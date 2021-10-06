#include <iostream>

int main() {
  char letter = 'a';
  while (letter <= 'z') {
    std::cout << letter << ": " << static_cast<int>(letter) << "\n";
    
    ++letter;
  }
  std::cout << '\n';
  return 0;
}