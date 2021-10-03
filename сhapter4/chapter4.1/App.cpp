#include <iostream>

enum class MonsterType { ORGE, GOBLIN, SKELETON, ORC, TROLL };

struct Monster {
  MonsterType type; // Тип
  std::string name; // Ім'я
  uint16_t health;  // Здоров'я
};

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
  printMonster(goblin);
  return 0;
}