#include <iostream>

#include "Get.h"

int main() {
  std::cout << "// Enter the integer.\n"
               "> ";
  int smaller;
  getInt(smaller);
  std::cout << '\n';

  std::cout << "// Enter a larger integer.\n"
               "> ";
  int larger;
  getInt(larger);
  std::cout << '\n';

  if (smaller > larger) {
    std::cout << "Change numbers in places.\n";
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
