// -*- C++ -*-

#include <iostream>

using std::cout;
using std::endl;

double addTwoNumbers(const double x, const double y) {
  return x + y;
}

int main() {
  const double x = 3.14;
  const double y = 2.71;

  const double z = addTwoNumbers(x, y);
  (void)z;
  
  return 0;
}
