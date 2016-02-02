// -*- C++ -*-

#include <iostream>

using std::cout;
using std::endl;

int main() {
  const int x = 10;
  const int& y = x;

  cout << "x is " << x << endl;
  
  (void)y; //this is added to supress the warning about y being unused

  return 0;
}
