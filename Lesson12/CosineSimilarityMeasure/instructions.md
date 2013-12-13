Progtest Practice 12

**Cosine similarity measure**

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Create a program that for two given vectors, computes their similarity using the Cosine Similarity Measure (CMS).

The first input line of the program is an integer number N, specifying the number of elements of each vector. The second line contains N floating point numbers representing the first vector values, the third line contains N floating point values of the second vector.

The output of the program is the cosine of the angle between the input vectors. The formula of the CMS is simple: let us call the input vectors v1 and v2. The similarity is given by 
(v1 * v2) / (||v1|| * ||v2||). 
The output is always concluded with a newline.

The program checks the correctness of the inputs. The vector element count cannot be negative or zero, other parameters can have any floating point value. Should the input be incorrect, the program prints "Invalid input." and terminates.

**Sample instances of the problem:**

5
12 15 0 1 5
0.12 0.14 1.54 2 14
CSM: 0.267

5
0 0 0 1 2
0.1 0 0 0 1
CSM: 0.890

12
0 1 2 3 4 5 6 7 8 9 10 11
11 10 9 8 7 6 5 4 3 2 1 0
CSM: 0.435

5
5.12 9.21 9.68 14.54 0.1
5.43 6.43 6.57 540 test
Invalid input.

-5
Invalid input.

**Hint:**

- Use the double data type, not float.
- Your program will be tested using memory debugger. The test focuses on correct memory access in your program. Should your program access a memory outside the allocated bounds, the program will be terminated with "Segmentation fault". Moreover, the testing environment tests whether all dynamically allocated memory blocks have been freed after use. A penalty applies if there are unfreed memory blocks.
