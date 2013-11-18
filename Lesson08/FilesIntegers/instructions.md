Progtest Practice 8

Files - integers
Submission deadline: -
Evaluation:	0.0000
Max. assessment: 1.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Develop a function (not an entire program, just a function) named evenOdd. The function reads in integer numbers from a file and creates another file where it copies the input data. However, the function should first copy even numbers from the input file, then it should add odd numbers.

The function has the following interface:

```c
int evenOdd ( const char * srcFileName, const char * dstFileName );
```

srcFileName

is a string denoting the name of the input file. The input file contains the input integers, each integer on a separate line. The input data is in a textual form. Sample input data is available in the downloadable "test data" archive.

dstFileName

is a string denoting the output file name. The function shall create the output file and copy the even integers from the source file first and then copy the odd integer from the input file. Moreover, the function shall not modify the ordering of the even (odd) numbers.

return value

the function shall return 1 to indicate success (the file was processed) or 0 to indicate any error (e.g. I/O error).

Your implementation must adhere the interface of the evenOdd function. Submit a source file with your implementation of the evenOdd function. The source file shall include the function itself and any of your supplementary function called from the evenOdd function. The header files and main function, however, shall be placed inside conditional compile blocks, as shown in the template below. We recommend you to copy the template and use it as a basis for your project.

```
#ifndef __PROGTEST__
#include <stdio.h>
#include <stdlib.h>
#endif /* __PROGTEST__ */

/* Your supplementary functions (if needed) */

int evenOdd ( const char * srcFileName, const char * dstFileName )
 { 
   /* implementation */
 }
  
#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
 {
   /* your tests */
   return 0;
 }
#endif /* __PROGTEST__ */
```

Sample use:

/* file in.txt:
------8<-----
3
6
7
2
0
20
19
0 
-3
451
------8<-----
*/
evenOdd ( "in.txt", "out.txt" ); /* return: 1 */
/* file out.txt:
------8<-----   
6
2 
0
20
0
3
7
19   
-3
451
------8<-----
*/
  
/* file in.txt:
------8<-----
2
6
-4
------8<-----
*/
evenOdd ( "in.txt", "out.txt" ); /* return: 1 */
/* file out.txt:
------8<-----
2
6
-4
------8<-----
*/
  
/* file in.txt:
------8<-----
7
hello
------8<-----
*/
evenOdd ( "in.txt", "out.txt" ); /* return: 0 */

**Hints:**

Use int data type to represent the numbers.
There are two basic algorithms to solve the problem:
scan the input file twice, i.e. process even numbers in the first pass and odd numbers in the second pass. Function rewind or function freopen may be used to return to the beginning of the file.
The second option passes the input file only once and stores the data into an array. Since the size of the array is not known beforehand, the array has to be resized as the input is read. Use realloc function to change the size of the array.
