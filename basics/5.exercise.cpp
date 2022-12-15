#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << left << setw(15) << "courses"
       << setw(10) << "students" << endl
       << left << setw(15) << "javaScript" << right << setw(8) << 100 << endl
       << left << setw(15) << "c++" << setw(8) << right << 45 << endl;
}