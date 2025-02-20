#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
  // properties
  string name;
  int level;

public:
  int health;
  char section;

  // parametrised constructor
  hero(int health)
  {
    cout << "constructor called" << endl;
    cout << this << endl;
    this->health = health;
    cout << this->health << endl;
  }

  hero(int health, char section)
  {
    cout << "constructor called 2" << endl;
    cout << this << endl;
    this->health = health;
    this->section = section;
  }
};

int main()
{

  hero h1(100, 'A');
  cout << "address of hero h1" << " " << &h1 << endl;
  hero *h2 = new hero(200);

  return 0;
}

//(this) keyword stores address of current object

/// if we create our own constructor then default constructor is destroyed
