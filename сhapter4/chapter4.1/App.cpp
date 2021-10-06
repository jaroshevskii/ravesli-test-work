#include <iostream>

enum class MonsterType { ORGE, GOBLIN, SKELETON, ORC, TROLL };

struct Monster {
  MonsterType type; // Тип
  std::string name; // Ім'я
  int health;       // Здоров'я
};

/// Отримати тип монстра.
std::string getMonsterType(const MonsterType &monsterType) {
  switch (monsterType) {
  case MonsterType::GOBLIN:
    return "Goblin";
  case MonsterType::ORC:
    return "Orc";
  case MonsterType::ORGE:
    return "Orge";
  case MonsterType::SKELETON:
    return "Skeleton";
  case MonsterType::TROLL:
    return "Tronll";
  default:
    return "Unknown";
  }
}

/// Вивести монстра.
void printMonster(const Monster &monster) {
  std::cout << "Type: " << getMonsterType(monster.type) << "\n"
               "Name: " << monster.name << "\n"
               "Health: " << monster.health << "\n";
  std::cout << '\n';
}

int main() {
  Monster goblin { MonsterType::GOBLIN, "Jonh", 170 };
  printMonster(goblin);

  Monster orc { MonsterType::ORC, "James", 35 };
  printMonster(orc);
  return 0;
}