#include <iostream>

struct Advertising {
  uint16_t nViews;                // Кількість переглядів.
  double percentOfClicks;         // Відсоток кліків.
  double averageEarningsPerClick; // Середній заробіток за клік.
};

void getAdvertising(Advertising &advertising) {
  std::cout << "// Enter the number of views.\n"
               "> ";
  std::cin >> advertising.nViews;
  std::cout << '\n';

  std::cout << "// Enter the percent of clicks.\n"
               "> ";
  std::cin >> advertising.percentOfClicks;
  std::cout << '\n';

  std::cout << "// Enter the average earnings per click.\n"
               "> ";
  std::cin >> advertising.averageEarningsPerClick;
  std::cout << '\n';
}

void printAdvertising(const Advertising &advertising) {
  std::cout << "Number of views: " << advertising.nViews << "\n"
            << "Percent of clicks: " << advertising.percentOfClicks << "\n"
            << "Earnings per ad: " << advertising.averageEarningsPerClick
            << "$\n";
  std::cout << '\n';
}

void printTotalEarnings(const double &totalEarnings) {
  std::cout << "Total earnings: " << totalEarnings << "$\n";
  std::cout << '\n';
}

int main() {
  Advertising advertising;
  getAdvertising(advertising);

  printAdvertising(advertising);

  double totalEarnings = advertising.nViews *
                         advertising.averageEarningsPerClick / 100 *
                         advertising.percentOfClicks;

  printTotalEarnings(totalEarnings);
  return 0;
}