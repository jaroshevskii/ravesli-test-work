#include <iostream>

int main() {
  std::cout << "// Enter the number.\n"
               "> ";
  int smaller;
  std::cin >> smaller;
  std::cout << '\n';

  std::cout << "// Enter a larger number.\n"
               "> ";
  int larger;
  std::cin >> larger;
  std::cout << '\n';

  if (smaller > larger) {
    std::cout << "We change the numbers.\n";
    std::cout << '\n';

    int temp = smaller;
    smaller = larger;
    larger = temp;
  }

  std::cout << "Smaller: " << smaller << "\n"
            << "Larger: " << larger << "\n";
  std::cout << '\n';
  return 0;
}
