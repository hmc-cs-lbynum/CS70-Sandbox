// -*- C++ -*-

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  const size_t loopUpperLimit = 5;

  for (size_t index = 0; index < loopUpperLimit; ++index) {
    cout << "index is " << index << endl;
  }

  return 0;
}
