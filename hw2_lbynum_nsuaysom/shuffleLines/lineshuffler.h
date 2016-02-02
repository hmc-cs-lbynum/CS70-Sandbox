/**
 * \file lineshuffler.h
 * \author CS 70 Provided Code
 *
 * \brief Interface definition for LineShuffler.
 */

// C++ include guard for header file.
// Its mere presence will prevent linker errors and much sorrow later.
#ifndef LINESHUFFLER_H_INCLUDED
#define LINESHUFFLER_H_INCLUDED 1

#include <string>
#include <vector>
#include <random>

/**
 * \class LineShuffler
 * \brief Takes in lines, then outputs them in a random order.
 * \details
 *   Uses the incredibly simple algorithm of: starts empty. Then call
 *   addLine many times until all lines are added. Then until isEmpty,
 *   call removeLine.
 * \remarks
 *   Randomness depends on the Random class.
 */
class LineShuffler {
 public:
  // ************
  // CONSTRUCTORS
  // ************

  /**
   * \brief Initializes the object to empty.
   *
   * \pre None.
   * \post The object will contain no lines (isEmpty() == true).
   */
  LineShuffler();

  // *********************
  // PROHIBITED OPERATIONS (assignment & copy construction)
  // *********************

  LineShuffler(const LineShuffler&) = delete;                 ///< Disabled
  LineShuffler& operator=(const LineShuffler& rhs) = delete;  ///< Disabled


  // ****************
  // MEMBER FUNCTIONS
  // ****************

  /**
   * \brief
   *    Removes and returns a random line stored in the LineShuffler.
   *
   * \pre Object should be non-empty (isEmpty() == false)
   * \returns A random string from the object.
   * \post Removes the selected string from the object.
   */
  std::string removeARandomLine();

  /**
   * \brief
   *   Adds a line to the collection stored in the LineShuffler.
   *
   * \pre `line` is an arbitrary string.
   * \post `line` has been added to the collection.
   */
  void addLine(std::string line);

  /**
   * \brief Tests whether there are strings in this collection.
   *
   * \returns true iff there are no lines in the LineShuffler.
   */
  bool isEmpty();

 private:
  // ************
  // PRIVATE DATA
  // ************

  int count_;                             ///< Number of lines stored.
  std::vector<std::string> storedLines_;  ///< Collection (vector) of lines.

  /// A random number "engine" that gets pseudorandom bits
  std::default_random_engine randomNumberEngine_;
};

#endif  // LINESHUFFLER_H_INCLUDED

/* (Junk to make emacs use a specific indentation style)
 * Local Variables:
 * c-file-style: "Google"
 * End:
 */
