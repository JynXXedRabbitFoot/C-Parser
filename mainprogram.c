#include <stdio.h>
#include "stack.h"
#include "statemachine.h"
#include "reduction.h"

char * secondArgument;

void decrementArgument () {
	secondArgument--;
	}

// yeps
void removeSpaces (char* source) {
	char* i = source;
	char* j = source;
	while(*j != 0) {
		*i = *j++;
		if(*i != ' ')
			i++;
		}
	*i = 0;
	}

extern void processEvent (char ch);

void testMain (int argc, char * argv[]) {
	char testval;
	//r1
	push (0);
	push ('E');
	push (0);
	push ('+');
	push (0);
	push ('T');
	push (0);
	testval = reduction1 ();
	printf ("test of R1 should be E, was %c \n", testval);

	//r2
	push ('T');
	push (0);
	testval = reduction2 ();
	printf ("test of R2 should be E, was %c \n", testval);

	//r3
	push ('T');
	push (0);
	push ('*');
	push (0);
	push ('F');
	push (0);
	testval = reduction3 ();
	printf ("test of R3 should be T, was %c \n", testval);

	//r4
	push ('F');
	push (0);
	testval = reduction4 ();
	printf ("test of R4 should be T, was %c \n", testval);

	//r5
	push ('(');
	push (0);
	push ('E');
	push (0);
	push (')');
	push (0);
	testval = reduction5 ();
	printf ("test of R5 should be F, was %c \n", testval);

	//r6
	push ('A');
	push (0);
	testval = reduction6 ();
	printf ("test of R6 should be F, was %c \n", testval);

	printf ("a");
	}


int main (int argc, char * argv[]) {
	char ch;
	secondArgument = *(argv + 1);  // notice no array here!
	if(argc < 2) {
		printf ("need at least one argument \n");
		return 0;
		}
	printf ("I am going to process: %s \n", secondArgument);
	ch = *secondArgument;

	/* our lex */
	removeSpaces (secondArgument);

	/* stack starts with state 0 */
	push (STATE0);
	while(ch != '\0') {
		processEvent (ch);
		secondArgument++;
		ch = *secondArgument;
		}

	while(!empty ())
		printf ("%c", pop ());
	printf ("\n");

	return 0;
	}
