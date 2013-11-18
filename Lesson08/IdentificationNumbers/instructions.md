Progtest Practice 7

Binomial coefficients

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: -/ 2

The task is to implement a program that computes binomial coefficients.

The input to the program are two decimal numbers n and k.

The output is the value of the corresponding binomial coefficient computed using the formula: C (n,k) = n! / (k! * (n - k)!).

If the program detects an error, it displays an error message and terminates.

Please strictly adhere the format of the output. The output must exactly match the output of the reference program. The comparison is done by a machine, the machine requires an exact match. If your program provides output different from the reference, the program is considered malfunctioning. Be very careful, the machine is sensitive event to whitespace characters (spaces, newlines, tabulators). Please note that all output lines are followed by a newline character (\n). This applies even to the last line of the output, moreover, this applies even to the error message. Download the enclosed archive. The archive contains a set of testing inputs and the expected outputs. Read FAQ to learn how to use input/output redirection and how to simplify testing of your programs.

**Sample program output:**

Enter n and k:
4 2
C = 6

Enter n and k:
12 5
C = 792

Enter n and k:
0 0
C = 1

Enter n and k:
3 -2
Invalid input.

Enter n and k:
1 6
Invalid input.

Enter n and k:
hello world
Invalid input.
