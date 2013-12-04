**Easter computation**

Submission deadline: -
Evaluation:	10.0000
Max. assessment: 10.0000 (Without bonus points)
Submissions: - / 20
Advices: - / 2

Implement a function that given a list of years computes the dates of Easter. The function saves the computed day, month (in text form) and year as a table row in the output HTML file. Comment all functions in the source file using Doxygen.

The required function is declared as:

```
int easterReport ( const char * years, const char * outFileName )
```

```years``` is an input parameter - a list of years to compute the Easter for. The string may consist of individual years, or intervals. There may be more than one year/interval in the string, the years/intervals are separated by commas. Ignore whitespace separating the years/intervals. Each year must be greater than 1582 (Gregorian reform) and lower than 2200. If interval is given than the lower bound must be smaller than or equal to the upper bound. If invalid string is passed to the function, the function does nothing and returns an error code (see below).

```outFileName``` is a string denoting the name of the output HTML file. The name may consist of alphanumeric characters, dots, forward slashes, and backslashes. Moreover, the file name must end with ".html" extension. If the file name does not match the criteria, the function does nothing and returns an error code (see below). If the name is correct, the function generates its HTML output into that file. Each year from the input specification adds a row in the table generated into the output HTML file.

```return value``` the function returns a code describing the success/failure of the operation:
- EASTER_OK if the function succeeded.
- EASTER_INVALID_FILENAME if the output file name did not match the criteria above.
- EASTER_INVALID_YEARS if the input string (the list of years/intervals) was invalid.
- EASTER_IO_ERROR if there was an I/O error while generating the output file.

The function shall test the output filename first and then the input string. Thus, if both filename and the input string were invalid, the function shall return EASTER_INVALID_FILENAME.


The algorithm used for the calculation (Meeus/Jones/Butcher algorithm): Choose any year of the Gregorian calendar and call it Y. To determine the date of Easter, carry out the following calculations:

1. Divide Y by 19 to get a quotient (which we ignore) and a remainder A. This is the year's position in the 19-year lunar cycle. (A + 1 is the year's Golden Number.)
2. Divide Y by 100 to get a quotient B and a remainder C.
3. Divide B by 4 to get a quotient D and a remainder E.
4. Divide B + 8 by 25 to get a quotient F and a remainder (which we ignore).
5. Divide (B - F + 1) by 3 to get a quotient G
6. Divide 19A + B – D – G + 15 by 30 to get a quotient (which we ignore) and a remainder H.
7. Divide C by 4 to get a quotient I and a remainder K.
8. Divide 2E + 2I – K – H + 32 by 7 to get a quotient (which we ignore) and a remainder L
9. Divide A + 11H + 22L by 451 to get a quotient M and a remainder (which we ignore).
10. Divide H + L - 7M + 114 by 31 to get a quotient N and a remainder P.
11. Easter Sunday is the (P+1)th day of the Nth month (N can be either 3 for March or 4 for April).


Submit a source file with the implementation of the easterReport function. The submitted file must contain the function itself and all your auxiliary functions needed called from the function. The #include preprocessor directives as well as main function may be included in the submitted file, however, they shall be enclosed in conditional compile blocks as shown below. We recommend to copy the template below, copy it into your source file and use it as a basis for your development.

```
\#ifndef __PROGTEST__
\#include <cstdio>
\#include <cstdlib>
\#include <cctype>
\#include <cstring>
\#include <iostream>
\#include <iomanip>
\#include <fstream>
\#include <sstream>
\#include <string>
using namespace std;

\#define EASTER_OK                0
\#define EASTER_INVALID_FILENAME  1
\#define EASTER_INVALID_YEARS     2
\#define EASTER_IO_ERROR          3


\#endif /* __PROGTEST__ */

int easterReport ( const char * years, const char * outFileName )
 {
   /* todo */
 }

\#ifndef __PROGTEST__
int main ( int argc, char * argv[] )
 {
   /* tests */
   return 0;
 }
\#endif /* __PROGTEST__ */
```


The generated output HTML file must match the reference. The comparison is done by a machine, the machine is sensitive to any difference, even to missing/extra whitespace characters. Use the archive with sample outputs to test your implementation.
