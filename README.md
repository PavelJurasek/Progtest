#Progtest

Solution source codes for Progtest VSB 2013/2014 EN.

License: GNU GPL, see license.txt file

Those solutions are example study material. Please, do not crib this sources when you sit for an exam.

##Hints

- Replace ```\r\n``` with ```\n``` to make sure that your sources have UNIX-like line endings (use regex replacement or win2unix program)
- Replace ```([^\r])\n``` with ```\1\r\n``` to make sure that your sources have Windows line endings (use regex replacement or unix2win program)
- Use ```touch -t 201312130918.25 <filename>``` (YYYYMMDDHHMM.SS) to modify file timestamps. If date and time is before the file was created, creation date and time is replaced, otherwise only modification and open time is replaced
- Use ```touch <filename>``` to change modification and open time of file to current time (same as manually opening the file and saving its contents)
- Use ```stat -f "Name: %N%n Access: %m%t%Sa %n Modif: %m%t%Sm %n Change: %m%t%Sc %n Birth: %m%t%SB" <filename>``` to see datetimes related to given file (Mac only)
