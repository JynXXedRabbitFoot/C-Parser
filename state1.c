#include "stack.h"
#include "statemachine.h"
#include <stdio.h>
//Dan Kruse
//State 1 for the state machine.
int state1 (char event) {

	printf ("state1 proccessing %c event\n", event);
	switch(event) {
		case '+':
			push (event);
			push ('6');
			break;
		case '$':
			printf ("The Grammar Passed All Checks, And Was Accepted!\n");
			break;
		default:
			printf ("state1: unexpected event\n");
			return 1;
		}
	return 0;
	}
