Progtest Practice 4

**Fibonacci sequence (loop #2)**

Submission deadline: -
Evaluation:	1.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Your task is to develop a program that computes numbers in the Fibonacci sequence. The program shall display start of the sequence and ask the user whether to continue, or not. If the user decides to continue, the program shall display next number in the sequence and ask the user again. The user may either simply press the enter key (meaning to continue), or he/she may type some character and press enter key. In the latter case, the program shall continue unless the user typed n key.

The input of the program are the characters typed by the user.

The output are numbers in the Fibonacci sequence.

**Sample program output:**

The Fibonacci sequence starts with 1,1,2
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 3
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 5
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 8
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 13
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 21
Display next? [any key/n]
n

The Fibonacci sequence starts with 1,1,2
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 3
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 5
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 8
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 13
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 21
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 34
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 55
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 89
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 144
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 233
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 377
Display next? [any key/n]
y
Next number in Fibonacci sequence is: 610
Display next? [any key/n]
n

The Fibonacci sequence starts with 1,1,2
Display next? [any key/n]
n

The Fibonacci sequence starts with 1,1,2
Display next? [any key/n]
!
Next number in Fibonacci sequence is: 3
Display next? [any key/n]
?
Next number in Fibonacci sequence is: 5
Display next? [any key/n]
+
Next number in Fibonacci sequence is: 8
Display next? [any key/n]
-
Next number in Fibonacci sequence is: 13
Display next? [any key/n]
n

The Fibonacci sequence starts with 1,1,2
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 3
Display next? [any key/n]

Next number in Fibonacci sequence is: 5
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 8
Display next? [any key/n]

Next number in Fibonacci sequence is: 13
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 21
Display next? [any key/n]

Next number in Fibonacci sequence is: 34
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 55
Display next? [any key/n]

Next number in Fibonacci sequence is: 89
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 144
Display next? [any key/n]

Next number in Fibonacci sequence is: 233
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 377
Display next? [any key/n]

Next number in Fibonacci sequence is: 610
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 987
Display next? [any key/n]

Next number in Fibonacci sequence is: 1597
Display next? [any key/n]
a
Next number in Fibonacci sequence is: 2584
Display next? [any key/n]

Next number in Fibonacci sequence is: 4181
Display next? [any key/n]
n

**Advices:**

- Use getchar function to read characters from the input. The function reads one character from the input, it does not perform any conversion of the characters. Do not use getch function, getch it is not available in the testing environment.
- If the user just pressed enter, the getchar function returns character \n.
- If the user pressed a key and then enter, the function must be called twice. First call returns the character typed and the second call returns \n.
