#include <iostream>

#include "Get.h"

struct Advertising {
  int nViews;                     // Кількість переглядів.
  double percentOfClicks;         // Відсоток кліків.
  double averageEarningsPerClick; // Середній заробіток за клік.
};

/// Отримати рекламу
void getAdvertising(Advertising &advertising) {
  std::cout << "// Enter the number of views.\n"
               "> ";
  getInt(advertising.nViews);
  std::cout << '\n';

  std::cout << "// Enter the percent of clicks.\n"
               "> ";
  getDouble(advertising.percentOfClicks);
  std::cout << '\n';

  std::cout << "// Enter the average earnings per click.\n"
               "> ";
  getDouble(advertising.averageEarningsPerClick);
  std::cout << '\n';
}

/// Вивести рекламу
void printAdvertising(const Advertising &advertising) {
  std::cout << "Number of views: " << advertising.nViews << "\n"
            << "Percent of clicks: " << advertising.percentOfClicks << "\n"
            << "Earnings per ad: " << advertising.averageEarningsPerClick
            << "$\n";
  std::cout << '\n';
}

double setTotalEarnings(const Advertising &advertising) {
  return advertising.nViews * advertising.averageEarningsPerClick / 100 * 
         advertising.percentOfClicks;
}

/// Вивести загальний заробіток
void printTotalEarnings(const double &totalEarnings) {
  std::cout << "Total earnings: " << totalEarnings << "$\n";
  std::cout << '\n';
}

int main() {
  Advertising advertising;
  getAdvertising(advertising);

  printAdvertising(advertising);

  const double totalEarnings = setTotalEarnings(advertising);

  printTotalEarnings(totalEarnings);
  return 0;
}