Progtest Practice 10

Set intersection

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Implement a program, which will calculate and write the INTERSECTION of two sets.

The program's input is the number of set's members and the set's members (integer numbers).

The program's output are members of the intersection. The order of set members in the output is not important, however, the members cannot be duplicated.

The program detects an invalid input if the number of set elements is not a non-negative integer, the set members are invalid, or set members are duplicate din the input sets. The format of the error message is shown in the sample runs below.

**The program's work demonstration:**

Enter size of set A:
5
Enter members of set A:
1 3 7 9 4
Enter size of set B:
6
Enter members of set B:
15 1 4 99 3 17
Set intersection:
{1, 3, 4}

Enter size of set A:
7
Enter members of set A:
1 2 3 4 5 6 7
Enter size of set B:
7
Enter members of set B:
6 4 5 2 3 1 7
Set intersection:
{1, 2, 3, 4, 5, 6, 7}

Enter size of set A:
4
Enter members of set A:
10 8 27 16
Enter size of set B:
2
Enter members of set B:
33 17
Set intersection:
{}

Enter size of set A:
5
Enter members of set A:
1 8 12 6 8
Invalid input.
Enter size of set A:
-3
Invalid input.

Enter size of set A:
2
Enter members of set A:
5 abcd
Invalid input.

**Help:**

- Use arrays to represent the sets, don't use vector or other STL structures. If vector or other STL structure is used, the program will not compile.
- Set sizes are not restricted, do not use statically allocated arrays to represent them. Instead, use dynamically allocated arrays.