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
  cout << "static" << endl;

  hero h1;
  h1.set_health(100);
  h1.set_level(15);

  cout << h1.print_health(15) << endl;
  cout << h1.print_level(15) << endl;

  // dynamic allocation
  cout << "dynamic" << endl;

  hero *h2 = new hero;

  (*h2).set_health(99);
  (*h2).set_level(14);
  (*h2).set_name("pranay");

  // both ways are correct
  cout << (*h2).print_name(15) << endl;
  cout << (*h2).print_health(15) << endl;
  cout << (*h2).print_level(15) << endl;

  cout << endl;
  h2->set_health(98);
  h2->set_level(13);
  h2->set_name("prasoon");
  cout << h2->print_name(15) << endl;
  cout << h2->print_health(15) << endl;
  cout << h2->print_level(15) << endl;

  return 0;
}
