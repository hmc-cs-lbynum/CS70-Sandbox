// -*- C++ -*-
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> integers;
  integers.push_back(0);
  integers.push_back(1);
  integers.push_back(2);
  cout << "integers starts with " << integers[0] << endl;

  return 0;
}
