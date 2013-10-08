Progtest Practice 3

Characters

Submission deadline: -
Evaluation: 1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Develop a program that performs character substitutions. Uppercase characters shall be converted to lowercase, lowercase characters shall be converted to uppercase and digits shall be replaced by lowercase letters.

The input of your program is a single word, the word is at most 80 characters long.

The output of the program is the input word with substitutions applied:

lowercase characters are replaced with their uppercase equivalents,
uppercase characters are replaced with their lowercase equivalents, and
digits are replaced with lowercase characters, 0 is replaced by a, 1 is replaced by b, and so forth.
The other characters (such as comma, colon, parentheses, ...) shall be removed, i.e. they shall not appear in the output string.
The program does not have to care about invalid input in this problem as any input string is valid.

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

Input | Output
----- | -----
abcABC012 | ABCabcabc
Homunkulus | hOMUNKULUS
0123456789 | abcdefghij
abc_BCD_678 | ABCbcdghi
student.solidni@vsb.cz | STUDENTSOLIDNIVSBCZ
Ostrava,17.listopadu70833 | oSTRAVAbhLISTOPADUhaidd
