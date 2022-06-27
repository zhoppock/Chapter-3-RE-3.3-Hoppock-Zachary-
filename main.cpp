#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
  int x;
  int y = 1;
  cin >> x;
  if (cin.fail())
  {
    y = y + x; // never correctly gets tested
  }
  else
  { cout << "Valid";}
  cout << y;
   return 0;
}