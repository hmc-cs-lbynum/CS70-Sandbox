Question 1 -------------------------------------------------------------------
Using C++ is like driving a car without GPS, where you have full control of 
the vehicle, and no one is telling you where to turn and where not to turn, 
but you have more risk of getting lost or in an accident.

Java, on the other hand, is like driving with a GPS that tells you which 
route to take and won't allow you to take a risky or dangerous route,
but in stopping you from doing anything dangerous or taking any detours, it 
can slow you down.

Question 2 -------------------------------------------------------------------
cout << x; 
Suppose you have a tupperware container with some food in it. This is like
opening the lid of the container and showing everyone what is inside
without eating any of it.

x = 5;
To continue the analogy, this is like replacing the food in the container
with new food.

Question 3 -------------------------------------------------------------------
The address is the physical location in memory where the information is
stored, and the variable refers to what information is stored at that location.


Question 4 -------------------------------------------------------------------
\\Look up what references are and come back


Question 5 -------------------------------------------------------------------
\\A reference is for 


Question 6 -------------------------------------------------------------------

* Code snippet 1 matches memory diagram C.
* Code snippet 2 matches memory diagram B.
* Code snippet 3 matches memory diagram A.
* Code snippet 4 matches memory diagram F.
* Code snippet 5 matches memory diagram E.

Question 7 -------------------------------------------------------------------

i)  \\Memory diagram attached as question7_diagram.png

ii) y is not a normal variable. It does not store a value of its own but
instead points to the memory address of x. So when x is changed, y still points 
to x, but x has a new value. So printing y will print the current value of x,
which at that point was 2.

iii) When we tell z to point to y, it sees that y is pointing to x, so it also 
points to x. The fact that z is const means it can never point to any other
variable, and we cannot change x throug z, but there are no limitations on x 
itself or any other variable references to x, including y. Because y is a 
normal reference to x, we can change x through y. So when we call y = 3, 
x becomes 3. z still points to x, so it prints 3. 

Question 8 -------------------------------------------------------------------

i) \\Memory diagram attached as question8_diagram.png

ii) The line w = y makes w reference whatever y is referencing, in this case, 
it makes w referece x. It effectively says 'take what is stored in y and store
it in w' but a reference to x is stored in y, so that's what gets stored in w.

iii) Each of the two lines would tell w to reference what y is referencing,
but int& w = y; is initializing a new variable and requires the allocation of
a new spot in memory, whereas w = y; only changes the value of existing
variables.
