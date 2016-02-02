// -*- C++ -*-

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  const vector<int> integers = {0, 1, 2, 3};

  for (size_t index = 0; index < integers.size(); ++index) {
    cout << "integers[" << index << "] is " << integers[index] << endl;
  }

  return 0;
}
