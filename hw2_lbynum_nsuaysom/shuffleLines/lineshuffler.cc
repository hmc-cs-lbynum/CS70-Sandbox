/**
 * \file lineshuffler.cc
 * \author CS 70 Provided Code
 *
 * \brief
 *   Implements LineShuffler. See lineshuffler.h for function
 *   descriptions.
 */

#include "lineshuffler.h"
#include <string>

using std::string;

LineShuffler::LineShuffler() {
  count_ = 0; // Intentionally don't use initializer list

  // Seed the pseudorandom number engine with an actual random number
  // Make a truly random engine
  std::random_device trueRandomEngine;
  randomNumberEngine_.seed(trueRandomEngine());
}

string LineShuffler::removeARandomLine() {
  // Choose a random line to erase.

  // A distribution for the random numbers. This lets you use the same random
  // number engine to generate both, say, integers from 0-8 and floating-point
  // numbers from 0-1.
  // In this case, we will have it generate a random number between 0 and
  // count_-1
  std::uniform_int_distribution<int> randomDistribution(0, count_ - 1);

  // Generate the random number using our distribution with our engine
  int randomIndex = randomDistribution(randomNumberEngine_); // no const yet

  string erasedLine = storedLines_[randomIndex]; // no const yet

  // Delete the string at storedLines_[randomIndex] and
  //  move the other strings up.
  storedLines_.erase(storedLines_.begin() + randomIndex);
  --count_;

  return erasedLine;
}

void LineShuffler::addLine(string lineToAdd) {
  storedLines_.push_back(lineToAdd);
  ++count_;
}

bool LineShuffler::isEmpty() {
  return count_ == 0;
}

/* (Junk to make emacs use a specific indentation style)
 * Local Variables:
 * c-file-style: "Google"
 * End:
 */
