## Exercise 01
* **Search Term:**       : read-only variable is not assignable
* **URL with Solution:** : http://stackoverflow.com/questions/22788927/
read-only-variable-is-not-assignable
* **How to fix:**        : The code is trying to assign a value to a constant 
(read-only) variable, so we remove the 'const' from line 9.

## Exercise 02
* **Search Term:**       : binding of reference to type 'int' to a value of 
type 'const int' drops qualifiers
* **URL with Solution:** : http://stackoverflow.com/questions/27812119/
binding-of-reference-to-a-value-of-type-drops-qualifiers
* **How to fix:**        : We cannot bind a non-const reference to a const
object, so to maintain functionality, we instead make y a const reference
(line 10). We also add (void)y; to line 14 to suppress the warning about
y being unused.

## Exercise 03
* **Search Term:**       : non-const lvalue reference to type cannot bind to 
a value of unrelated type
* **URL with Solution:** : http://stackoverflow.com/questions/18565167/
non-const-lvalue-references
* **How to fix:**        : We see that y is a string and x is an int, so we
can't assign a reference to a different type. We fix this by changing 'string&'
to 'int&' in line 12. We also add (void)y; to line 15 to suppress the warning 
about y being unused.

## Exercise 04
* **Search Term:**       : include vector library
* **URL with Solution:** : http://www.physics.utah.edu/~detar/lessons/c++/
canned_classes/node10.html
* **How to fix:**        : We notice that vector is not a defined type, so
we have to include the library <vector> to be able to initialize and use a
variable of this type. Thus we add #include <vector> to line 3. We also have
to declare which namespace 'cout,' 'endl,' and 'vector' are from and make use 
of the input output stream, so we add using std::cout;, using std::endl;, and 
using std::vector; to lines 4-6 and #include <iostream> to line 2.

## Exercise 05
* **Search Term:**       : undefined reference linker command failed with exit 
code 1
* **URL with Solution:** : http://stackoverflow.com/questions/tagged/
undefined-reference
* **How to fix:**        : With help from the link, we determine that we have a
declaration but a missing definition for sayHello(); To fix this we define 
sayHello() as a function that prints 'hello!' changing lines 8-10 to 
void sayHello(){
	cout << "hello!" << endl; //print hello!
};

## Exercise 06
* **Search Term:**       : use of undeclared identifier c++
* **URL with Solution:** : http://stackoverflow.com/questions/22197030/what-
is-an-undeclared-identifier-error-and-how-do-i-fix-it
* **How to fix:**        : From the link, this is an error generated from
using a function before it is declared or defined. So we fixed the code
by moving the definition of function sayHello() to be above main.

## Exercise 07
* **Search Term:**       : variable is uninitialized when used here
* **URL with Solution:** : http://stackoverflow.com/questions/6813660/
warning-uninitialized-variable-but-i-have-initialized-c-compiler-bug
* **How to fix:**        : In this example we have declared the variable'x'
without initializing it. We fixed this by initializing 'x' to be 0 in line
9 because we expected that the writer of the code assumed that 'x' would 
be 0 until assigned otherwise.

## Exercise 08
* **Search Term:**       : use '==' to turn this assignment into an equality 
comparison
* **URL with Solution:** :http://www.quirksmode.org/blog/archives/2008/
01/using_the_assig.html
* **How to fix:**        : C++ told us the error and the way to fix it, but
we googled for further information. We want to compare 'x' instead of 
assigning it for the if statement. We changed '=' in line 11 to be
'==' to do the comparison. 

## Exercise 09
* **Search Term:**       : use of undeclared identifier
* **URL with Solution:** : http://stackoverflow.com/questions/22197030/
what-is-an-undeclared-identifier-error-and-how-do-i-fix-it
* **How to fix:**        : The use of 'i' is not in the right scope,
because the for loop had no brackets. We fixed this by adding brackets 
to define the scope for the for loop.

## Exercise 10
* **Search Term:**       : expected ';' in 'for' statement specifier
* **URL with Solution:** :https://bytes.com/topic/c/answers/961251-
expected-declaration-specifier-loop
* **How to fix:**        :The syntax for the for loop is incorrect.
We replaced  the commas with semicolons in the for loop in line 13. 
Orthewise the compiler interprets this incorrectly.

## Exercise 11
* **Search Term:**       :comparison of integers of different signs 
* **URL with Solution:** :http://stackoverflow.com/questions/31709250
/error-when-comparing-integers-of-different-signs 
* **How to fix:**        :We changed the variables 'loopUpperLimit' and
'index' to be of the same type, so that they can be compared in the
for loop without warnings. We changed the type of 'index' to size_t.


## Exercise 12
* **Search Term:**       :use of undeclared identifier 
* **URL with Solution:** :http://stackoverflow.com/questions/22197030/
what-is-an-undeclared-identifier-error-and-how-do-i-fix-it
* **How to fix:**        : The variable 'i' is not defined in the right
scope, so we indicated the scope by adding brackets after the for loop
in lines 6 and 9. 

## Exercise 13
* **Search Term:**       : how to compare string in C++
* **URL with Solution:** :http://www.cplusplus.com/forum/general/26283/
* **How to fix:**        : We found that we were trying to compare a
string to a char in the original code. We fixed it by changing 'c'
to "c" in line 13. 

## Exercise 14
* **Search Term:**       :warning: unused parameter C++
* **URL with Solution:** :http://stackoverflow.com/questions/1486904/
how-do-i-best-silence-a-warning-about-unused-variables
* **How to fix:**        :We found that the variable 'y' was unused,
which was because the code is wrong for 'addTwoNumbers'. We changed 
line 9 into return x + y;. Since 'z' is not used, we add (void)z; in
line 17 to suppress the warning. 

## Exercise 15
* **Search Term:**       : warning: control may reach end of non-void function
* **URL with Solution:** : http://stackoverflow.com/questions/19532286/warning
-of-control-may-reach-end-of-non-void-function
* **How to fix:**        : From the link, we noticed that the function 
searchVectorForKey did not have a return outside of the for loop, so we fixed
this problem by adding return false; to line 16.

## Exercise 16
* **Search Term:**       :class member cannot be redeclared
* **URL with Solution:** :http://stackoverflow.com/questions/14095405/member
-function-redeclaration-not-allowed
* **How to fix:**        :We first noticed that 'numSpots' had to be 
initialized, so we added int numSpots = 0; in line 10. The function
definition was outside the scope so we moved it after the declaration
(in line 5-7). Then we encountered an error of redeclaring the
function in the class, for which we found the solution online and removed
the declaration.
