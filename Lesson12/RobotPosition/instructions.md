Progtest Practice 12

**Robot position**

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Create a program that simulates the movement of a robot by calculating the coordinates, at which the robot is located at each step, and the angle, at which the robot is turned.

The input of the program consists of several parameters. The first is a positive integer number on the first line representing the number of iterations, that is, how many times will the computation of coordinates and angle be repeated. The second line contains 6 floating point numbers with the following meaning (in the given order): initial coordinate x, initial coordinate y, initial rotation (angle) of the robot phi, time difference between individual iterations delta, movement speed v, and the angle by which the robot turns after an iteration omega.

The output of the program is the information that at what coordinates and at what angle the robot is located after each iteration. The format of the output complies with the examples below. The formulas to obtain new values of the parameters in each iteration are these: 
x' = x + v * delta * cos(phi), 
y' = y + v * delta * sin(phi), 
phi' = phi + delta * omega. 

Parameters with an apostrophe are the new values. At the end of each iteration, the new values become the initial values for next iteration (that is, the values without an apostrophe). If the phi' angle is outside the 0 to 2*π interval, add/subtract period(s) 2*π to wrap the angle into that interval. Use M_PI constant from the mathematical library for the computation. Each output line is concluded with a newline character.

The program checks the correctness of the inputs. The number of iterations may not be negative or zero, other parameters can have any floating point value. Should the input be invalid, the program outputs "Invalid input." and terminates.

**Sample instances of the problem:**

5
12 15 0 1 5 0.12
x: 17.00, y: 15.00, phi: 0.12
x: 21.96, y: 15.60, phi: 0.24
x: 26.82, y: 16.79, phi: 0.36
x: 31.50, y: 18.55, phi: 0.48
x: 35.94, y: 20.86, phi: 0.60

10
0 0 0 1 2 0.1
x: 2.00, y: 0.00, phi: 0.10
x: 3.99, y: 0.20, phi: 0.20
x: 5.95, y: 0.60, phi: 0.30
x: 7.86, y: 1.19, phi: 0.40
x: 9.70, y: 1.97, phi: 0.50
x: 11.46, y: 2.93, phi: 0.60
x: 13.11, y: 4.06, phi: 0.70
x: 14.64, y: 5.34, phi: 0.80
x: 16.03, y: 6.78, phi: 0.90
x: 17.28, y: 8.34, phi: 1.00

-5
Invalid input.

5
error
Invalid input.

**Hint:**

- Use the double data type, not float.
- Use fmod function from the standard library to wrap the angle.
