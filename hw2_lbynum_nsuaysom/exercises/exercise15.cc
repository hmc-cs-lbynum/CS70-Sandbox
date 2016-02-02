// -*- C++ -*-

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool searchVectorForKey(const vector<double>& vec, const double key) {
  for (size_t i = 0; i < vec.size(); ++i) {
    if (vec[i] == key) {
      return true;
    }
  }
  return false;
}

int main() {
  const vector<double> doubles = {1.1, 2.2, 3.3};

  const bool doublesHasZero = searchVectorForKey(doubles, 0.);

  if (doublesHasZero) {
    cout << "doubles had zero!" << endl;
  }

  return 0;
}
