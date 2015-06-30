/*
 * Compile with the following command:
 *    gcc hello_world.c -o hello
 *
 * There should now be an executable in your directory called "hello" which you
 * should be able to run using ./hello.
 *
 * If you leave off the "-o hello" there will be an executable called "a.out"
 * which you can run the same way.
 *
 * Now try printing numbers and other things!
 * http://www.cplusplus.com/reference/clibrary/cstdio/printf/
 * 
 * Worked by kakadong
 */
#include <stdio.h>
#include <time.h>

int main () {
	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s", asctime(timeinfo));
	printf ("Hello world!\n");
	return 0;
}
