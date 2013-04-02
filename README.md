CSC 3320

Program Assignment 4

Spring 2013

Due Date:
See class schedule.
Delivery
This is a multiple file program that must be archived using the tar command. Deliver
a single file named pa4.tgz (all lowercase) as an attachment to an email that you
send to the class account 3320@orion.cudenver.edu. Put PA4 in the subject field, and
your name in the body of the email. I prefer you use your email account on the Ouray
server to deliver the program. Here is a tar command for this assignment.
tar –czvf pa4.tgz pa4.cpp pa4functions_tem.h pa4functions.tem pa4functions.h
pa4functions.cpp hash.h hash.tem
Program objectives
The objectives of this assignment are as follows.
1. Test your ability to design software and/or hardware to meet desired needs
(measurable outcome (b)).
2. Test your ability to identify, formulate, and solve computer science and
engineering problems (measurable outcome (c)).
Value
This program is worth 15 points. The distribution of points will be as follows.
Criterion                           Value
Templates                           1 
Hash table                          4
Hash function                       1
Program style (see below)           2
Correct output with annotation      5
Error checking                      1
Greeting                            1


Problem
You are to create a simple database using a hash table. The database will keep track of a
small club consisting of members who pay monthly dues. The dues are collected each
month and are based on the members’ participation in volunteer activity. The more a
member participates in monthly activities, the less the dues for that month. Use the
database to produce a yearly report for each member, listing their monthly dues, yearly
dues, and the average monthly dues.
Input
Two files whose names are to be read at the command in the argv[ ] variable. One file
will contain a list of member names and their monthly volunteer time in hours. The other
file will list the required dues for the corresponding time spent in volunteer work.


Output
A table listing the member, the members yearly dues, and the average monthly dues. This
table is to be displayed on the standard output. You are also to produce a file that lists
each member and his or her dues on a month by month basis. The name of the file will
be available in the argv[ ] variable.
Class requirements
Your hash table class must be based on a dynamic array or a darray.
1. At least one constructor that takes two parameters, one of type T (the type stored in
the hash table), and the other a pointer to a hash function.
2. Overloaded operator [ ] to return an index in the hash table where the member is
stored.
3. Overloaded operator << to display the hash table in a formatted tabular form.
Program requirements
1. Present the user with a greeting.
2. Read the file name for the members and their volunteer time in argv[1]. Read the file
name listing the dues and volunteer time in argv[2]. Read the output file in argv[3].
3. Build the hash table and compute the statistics.
4. Display the output and create the output file.
Notes
1. Create a struct that stores the student name, yearly dues and the average monthly
dues.
2. Your hash function should compute a table slot based on a persons name as follows.
Table slot = key mod table_size, where key is computed as the sum of the ascii values
of the person’s name. If there is a “collision” (table slot is already occupied), use the
following function to resolve it.
Table slot = (key + i) mod table_size, where i = 0, 1, 2, … , table_size-1
3. The format of the input files will be as follows.
Amy 12 14 9 18 11 5 21 14 19 10 9 12
Bob 3 9 11 5 8 12 9 12 4 11 9 10
// Other entries
2 4
6 8 10 12 14 16 18 20 22 24
10 8.50 8 7.50 7 6.50 6 5.50 5 4.50 4 2
// Output file
Amy
Jan Feb Mar Apr May Jun
7.00 6.00 7.25 5.00 …….
// Blank line between entries
Bob
…..

// Hours volunteered
// Dues

Jul Aug Sep Oct Nov Dec

Note the use of interpolation for computing the dues with odd-valued volunteered
hours.

