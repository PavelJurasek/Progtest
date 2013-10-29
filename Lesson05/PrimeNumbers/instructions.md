Progtest Practice 5

Prime numbers

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 5

The task is to develop a program which displays prime numbers in a given interval.

The input of the program is an interval. The interval is defined by two integer numbers - the lower and upper bound (both inclusive).

The output is the list of prime numbers found in the interval. Each prime number is printed on a separate line.

The program must scrutinize the input. If the input is invalid, the program displays an error message and terminates. The following is considered invalid:

non-numerical values,
lower bound higher than the upper bound.
The program will be tested with intervals not exceeding 2000000000, thus int data type can be used to represent the numbers.

**Sample program output:**

Define interval:
0 10
2
3
5
7

Define interval:
-200 15
2
3
5
7
11
13

Define interval:
3 17
3
5
7
11
13
17

Define interval:
1999999900 2000000000
1999999913
1999999927
1999999943
1999999973

Define interval:
13 13
13

Define interval:
1 test
Invalid input.

Define interval:
test 2
Invalid input.

Define interval:
30 20
Invalid input.
