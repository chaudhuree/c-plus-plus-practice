// take input from user and store them then print them
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  string names[3];
  cout << "First persons name: ";
  getline(cin, names[0]);
  cout << "Second persons name: ";
  getline(cin, names[1]);
  cout << "Third persons name: ";
  getline(cin, names[2]);
  cout << "First persons name: " << names[0] << endl
       << " second persons name: " << names[1] << endl
       << " third persons name: " << names[2];
  return 0;
}