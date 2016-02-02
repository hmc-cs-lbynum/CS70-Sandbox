// -*- C++ -*-

int main() {
  double sum = 0;
  double currentTerm = 1;
  for (int i = 0; i < 5; ++i){
    sum += currentTerm;
    currentTerm *= i;
}
  return 0;
}
