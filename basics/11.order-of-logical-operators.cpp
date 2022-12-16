/*
doc:
()
!
&&
||

*/

// exercise:

/*
scenerio:
"A job applicant should be a us citizen and either have a bachelor degree or at least two years of work experience."

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  bool isUScitizen = true;
  bool hasBachelorDegree = false;
  int hasExperiences = 1;

  bool result = isUScitizen && (hasBachelorDegree || hasExperiences >= 2);
  cout << boolalpha << result << endl;
  return 0;
}