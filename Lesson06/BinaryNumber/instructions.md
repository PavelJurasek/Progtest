Progtest Practice 6

Binary number

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

The task is to implement a program that reads in a binary number from the standard input and displays the number as a decimal number (integer).

The input is a sequence of 0 and 1 in character format terminated by a newline. The sequence represents a binary number in the standard (left-to-right) notation, i.e. the first digit is the most significant and the last digit is the least significant. There is just one number sequence in the input line (without spaces), and a newline character terminates the input line immediately after the last digit. If there is any other character, the input shall be considered invalid. In such a case, the program shall detect it, report it and terminate.

The output of the program is the input number converted into the decimal notation or an error message as shown below.

Please strictly adhere the format of the output. The output must exactly match the output of the reference program. The comparison is done by a machine, the machine requires an exact match. If your program provides output different from the reference, the program is considered malfunctioning. Be very careful, the machine is sensitive event to whitespace characters (spaces, newlines, tabulators). Please note that all output lines are followed by a newline character (\n). This applies even to the last line of the output, moreover, this applies even to the error message. Download the enclosed archive. The archive contains a set of testing inputs and the expected outputs. Read FAQ to learn how to use input/output redirection and how to simplify testing of your programs.

**Sample program output:**

Input a binary number:
0101
Decimal number is: 5

Input a binary number:
000000
Decimal number is: 0

Input a binary number:
111111
Decimal number is: 63

Input a binary number:
110110
Decimal number is: 54

Input a binary number:
0001
Decimal number is: 1

Input a binary number:
0123
Invalid input.
