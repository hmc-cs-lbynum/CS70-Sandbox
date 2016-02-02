/**
 * \file shuffle.cc
 *
 * \brief Reads a sequence of lines from user, terminated by empty
 * line, then prints them out in random order.
 *
 * \note
 *  User interaction is handled by main, storing and fetching the lines
 *  is handled by the LineShuffler class.
 */

#include "lineshuffler.h"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * \brief Reads lines from user until it sees a blank line, then
 *   outputs in random order.
 *
 */
int main() {
  // Display the prompt.
  cout << "Enter lines to shuffle, ending with a blank line" << endl;

  LineShuffler lineShuffler;

  // Get lines from standard input and put them in the lineShuffler object.

  // Keep reading lines from user input until we see an empty line.
  // Note: the infinite loop is intentional, and logic within the loop breaks
  //  out of it appropriately.
  while (true) {
    string line;
    getline(cin, line);

    if (line == "") {
      break;
    }

    lineShuffler.addLine(line);
  }

  // Show the shuffled lines.
  cout << "Input done.  Here are the shuffled lines:" << endl;
  while (!lineShuffler.isEmpty()) {
    cout << lineShuffler.removeARandomLine() << endl;
  }

  return 0;
}

/* (Junk to make emacs use a specific indentation style)
 * Local Variables:
 * c-file-style: "Google"
 * End:
 */
