Progtest Practice 5

Triangles

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 5

The task is to develop a program to decide whether a triangle exists, or not.

The inputs of the program are three decimal numbers representing the lengths of triangle sides.

The output is the decision whether the three sides form a triangle, or not. Moreover, the area of the triangle is printed if the three sides form a triangle.

The program must scrutinize input data. If the input is invalid, the program prints out an error message and terminates. The following is considered invalid:

non-numerical values,
negative or zero-length sides.
To solve the problem, use triangle inequality or Heron's formula. There is a square root computation in the Heron's formula. If the expression is negative or zero, the triangle does not exist.

**Sample program output:**

Define triangle:
3 4 5
The triangle exists, area is: 6

Define triangle:
9.5 8.5 7.5
The triangle exists, area is: 30.4068

Define triangle:
1e-30 1e-30 1e-30
The triangle exists, area is: 4.33013e-61

Define triangle:
5 7 1
The triangle does not exist.

Define triangle:
1 2 3
The triangle does not exist.

Define triangle:
1 2 test
Invalid input.

Define triangle:
3 -3 4
Invalid input.
