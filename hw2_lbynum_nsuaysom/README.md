# Homework 2

# Overview
In this assignment, you'll work (or fight?) with the C++ compiler as you dive into compiler and linker errors, you'll practice some of the memory models we saw in class, and you'll also get the chance to modify existing C++ code and to write some C++ code from scratch.


# Reading
You should read the following sections of the *C++ Primer, 5th edition*, before you begin.
* Section 2.1 about primitive data types
* Section 2.6 about defining classes and about separate compilation
* Section 6.1 (but skip section 6.1.1) about functions and separate compilation
* Section 6.2, stopping after you finish 6.2.3 about argument passing

# Steps
There are nine issues to complete for this assignment.
As usual, you can find them under the "issues" tab above.

1. Memory diagram part
2. Compiler errors part
3. Compilation process part
4. Coding part
 1. Understanding the starting code
 2. Remove count_ from the LineShuffler class
 3. Write the exchange function
 4. Add a `shuffleStoredLines` to the LineShuffler class
 5. Add a `removeLine` to the LineShuffler class
 6. Update shuffleLines with new logic

# Grading
Your submission will be graded as follows:
* 12 points: correctness
* 7 points: completeness
* 7 points: style
* 7 points: elegance
* 7 points: clarity
* 5 points: overall submission quality
* 5 points: peer review

See the [Grading Guidelines](https://github.com/hmc-cs70-spring2016/Wiki/wiki/GradingGuidelines) wiki page for more information about what we're looking for in each of those categories.

We'll grade each of the categories and provide you itemized feedback.

# Resources
* See the [wiki page](https://github.com/hmc-cs70-spring2016/Wiki/wiki/SettingUpYourRepository) on setting up your repository for details on how to set up this (or any) assignment.
* See the wiki page on [Compiling](https://github.com/hmc-cs70-spring2016/Wiki/wiki/Compiling) for information about compiling code, including a section on separate compilation.
* Help each other out!
If you have resources or tips for other teams, add them to the [Hints and Tips](https://github.com/hmc-cs70-spring2016/Wiki/wiki/hw2_HintsAndTips) page for this assignment.

# Helpful Hints
* *Pair Programming:* Remember, your must work on the following as a pair, including the written part.
You can (and should) read this assignment writeup and think about it before you meet, however.
* *Commit Early, Commit Often:* Remember to check in your files regularly!
In particular, don't forget to check them in when you're finished.
* As a general rule (even outside CS 70!), *you should not add generated files* of any form (e.g., compiled code, PDFs made from LaTeX, etc) to a repository when those files can be automatically produced from files already in the repository.
* *Doxygen:* The C++ files are commented in `Doxygen` format.
`Doxygen` is a tool that can automatically generate HTML or LaTeX documentation from C++ files.
In future assignments, we will ask you to write your own Doxygen comments and to use Doxygen to generate documentation.
For now, it's important only that you keep all the comments in your code up to date.
You don't need to worry too much about the format of Doxygen comments in your code, nor do you need to generate Doxygen documentation.
