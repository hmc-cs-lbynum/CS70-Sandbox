// -*- C++ -*-

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
  int x = 10;
  int& y = x;

  cout << "x is " << x << endl;
  (void)y; //added to suppress the warning about y being unused

  return 0;
}
