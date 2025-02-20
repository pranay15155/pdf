// copy constructor

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

  // Default constructor
  hero()
  {
    cout << "constructor called 1" << endl;
  }

  // parametrised constructor

  hero(int health, char section)
  {
    cout << "constructor called 2" << endl;
    this->health = health;
    this->section = section;
  }

  // copy constructor
  hero(hero &temp)//pass by reference 
  {
    this->health = temp.health;
    this->section = temp.section;
  }
  //here instead of passing reference if it is passed by value than it goes in infinite loop

  void print()
  {
    cout << this->health << " " << this->section << endl;
  }
};

int main()
{

  // Create an object using the parameterized constructor.
  hero h1(100, 'A');

  // Use the compiler-generated copy constructor to create h2 as a copy of h1.
  hero h2(h1);

  // Create h3 using the default constructor and manually copy data.
  hero h3;
  h3.health = h1.health;
  h3.section = h1.section;

  // Print details of each hero object.
  h1.print(); // Expected output: 100 A
  h2.print(); // Expected output: 100 A (copied from h1)
  h3.print(); // Expected output: 100 A (manually assigned)

  return 0;

  // both h3 and h2 have same value of h1
  // difference is that h2 is assigned those value using copy constructor and
  // h3 is assigned values manually
}

//default constructor do shallow copy
