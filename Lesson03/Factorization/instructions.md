Progtest Practice 3

Factorization

Submission deadline: -
Evaluation: 1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2 

Your task is to develop a program to factorize a decimal number into two decimal factors. Moreover, the program shall display the error of the factorization.

The input of your program are three numbers - one non-negative number v and two positive numbers w and h. Value v is the number to be factorized, the other two number are initial values of the factors. The factorization itself makes use of the following formulas:

h = h * ((w * v) / (w * w * h))

w = w * ((v * h) / (w * h * h))

The error of the factorization is the difference of the product of the computed factors minus the original value v.

If the input is invalid (e.g. input values are not decimal numbers), the program detects the problem and prints an error message. The format of the error message is again shown below. The following is considered invalid input:

non-numeric value or
values v, w, or h violating their respective non-negative/positive constraints mentioned above.
If the program detects an error, it prints out the error message and terminates. The error message shall be printed on the standard output (do not send it to the standard error output).

Please strictly adhere the format of the output. The output must exactly match the output of the reference program. The comparison is done by a machine, the machine requires an exact match. If your program provides output different from the reference, the program is considered malfunctioning. Be very careful, the machine is sensitive event to whitespace characters (spaces, newlines, tabulators). Please note that all output lines are followed by a newline character (\n). This applies even to the last line of the output, moreover, this applies even to the error message. Download the enclosed archive. The archive contains a set of testing inputs and the expected outputs. Read FAQ to learn how to use input/output redirection and how to simplify testing of your programs.

Your program will be tested in a restricted environment. The testing environment limits running time and available memory. The exact time and memory limits are shown in the reference solution testing log. However, neither time nor memory limit could cause a problem in this simple program. Next, the testing environment prohibits the use of functions which are considered "dangerous" (functions to execute other processes, functions to access the network, ... ). If your program uses such functions, the testing environment refuses to execute the program. Your program may use something like the code below:

```
int main ( int argc, char * argv [] ) {
	... system ( "pause" ); /* aby se nezavrelo okno programu */ 
	return 0; 
}
```

This will not work properly in the testing environment - it is prohibited to execute other programs. (Even if the function is allowed, this would not work properly. The program would infinitely wait for a key to be pressed, however, no one will press any key in the automated testing environment. Thus, the program would be terminated on exhausted time limit.) If you want to keep the pause for your debugging and you want the program to be accepted by the Progtest, use the following trick:


```
int main ( int argc, char * argv [] )
{ 
	... 
	#ifndef __PROGTEST__ 
		system ( "pause" ); /* toto progtest "nevidi" */ 
	#endif /* __PROGTEST__ */ 
	return 0; 
}
```

**Sample program output:**

Enter values v, w, and h:
4 3 2.2
Number 4.000 lze faktorizovat na 3.000 x 1.333. The error is 0.000.

Enter values v, w, and h:
5 2 1.1
Number 5.000 can be factorized to 2.000 x 2.500. The error is 0.000.

Enter values v, w, and h:
1 2 chyba
Invalid input.

Enter values v, w, and h:
5 0 2
Invalid input.

Enter values v, w, and h:
-3.14 1.5 -2.4
Invalid input.

Advices:
	- Use double data type to store the values. Do not use float data type.
