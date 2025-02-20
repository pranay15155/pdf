#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
  // properties
  string name;
  int health;
  int level;

public:
  string print_name(int passkey)
  {
    if (passkey == 15)
      return name;
    return "give_correct_passkey";
  }

  int print_level(int passkey)
  {
    if (passkey == 15)
      return level;
    return -1;
  }
  int print_health(int passkey)
  {
    if (passkey == 15)
      return health;
    return -1;
  }

  void set_name(string name)
  {
    this->name = name;
  }

  void set_level(int level)
  {
    this->level = level;
  }

  void set_health(int health)
  {
    this->health = health;
  }
};

int main()
{

  // static allocation
  hero h1;

  return 0;
}
