#include <iostream>

using std::cout; // These will let me remove "std::" at the beginning of each cout and cin
using std::cin; // I just forgot to remove them on the ones below

int main() {
  
  std::cout << "You have 15 points. Distribute them across your HEALTH, ATTACK, and LUCK.\n";
  std::cout << "How many points will you put on HEALTH?\n";
  
  int health, attack, luck, points = 15;
  char yn;

  std::cin >> health;
  if(health < 1 || health >= 15) {
   std::cout << "You have to put at least 1 or at most 14 points to this.";
  }
  points = points - health;
  
  std::cout << "How many points will you put on ATTACK?\n";
  std::cin >> attack;
  if(attack < 1 || attack >= 14) {
    std::cout << "You have to put at least 1 or at most 13 points to this";
    return 0;
  }
  points = points - attack;
  if(points < 1) {
    std::cout << "You've used too many points! Try again.";
    return 0;
  }

  std::cout << "How many points will you put on LUCK?\n";
  std::cin >> luck;
  if(luck < 1 || luck >= 13) {
    std::cout << "You have to put at least 1 or at most 12 points to this";
    return 0;
  }
  points = points - luck;
  if(points < 0) {
    std::cout << "You've used too many points! Try again.";
    return 0;
  }
  
  std::cout << "Health: " << health << "\nAttack: " << attack << "\nLuck: " << luck << "\nRemaining: " << points << "\n[y/n]\n";
  std::cin >> yn;
  
  if(yn == 'y') {
   std::cout << "Character set!";
  } else if(yn == 'n') {
   std::cout << "Canceled setup!";
  }
  
 return 0;
}
