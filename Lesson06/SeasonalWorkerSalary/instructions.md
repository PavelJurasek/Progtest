Progtest Practice 6

Seasonal worker salary

Submission deadline: -
Evaluation:	0.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Implement a program that computes the salary of a seasonal worker. Assume that there are a certain number of visitors in a castle. The castle offers an attraction to its visitors, which costs 50 CZK. Based on a long-term observation, 7% of visitors pay for this attraction. There is a seasonal worker required to operate the attraction. His salary is determined by the earnings from the attraction as shown in the following table:

   0 - 1950 CZK ....  7O CZK/h,
2000 - 2450 CZK ....  80 CZK/h,
2500 - 2950 CZK ....  90 CZK/h,
3000 - 3450 CZK .... 100 CZK/h,
3500 and more CZK .. 110 CZK/h.

The worker has a regular 8 hour/day shifts. Estimate his salary based on the number of visitors.

The input of your program is an integer representing the number of visitors in one day.

The output is the estimation of the salary. If required, always truncate the fractions to the lower value.

The program should validate the input data. The constraints are obvious - the input represents the number of visitors, and therefore has to be non-negative. If the input is invalid, display an error message (see below) and terminate.

Please strictly adhere the format of the output. The output must exactly match the output of the reference program. The comparison is done by a machine, the machine requires an exact match. If your program provides output different from the reference, the program is considered malfunctioning. Be very careful, the machine is sensitive event to whitespace characters (spaces, newlines, tabulators). Please note that all output lines are followed by a newline character (\n). This applies even to the last line of the output, moreover, this applies even to the error message. Download the enclosed archive. The archive contains a set of testing inputs and the expected outputs. Read FAQ to learn how to use input/output redirection and how to simplify testing of your programs.

**Sample program output:**

Enter number of visitors:
1000
The salary is: 880 CZK

Enter number of visitors:
100
The salary is: 560 CZK

Enter number of visitors:
523
The salary is: 560 CZK

Enter number of visitors:
1234
The salary is: 880 CZK

Enter number of visitors:
-5
Invalid input.

Enter number of visitors:
0
The salary is: 560 CZK

Enter number of visitors:
Vyhodili jsme brigadnika.
Invalid input.
