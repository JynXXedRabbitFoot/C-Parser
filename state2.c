#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 2 for the state machine.
int state2 (char event) {
	char redValue;
	printf ("state2 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction2 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			push (event);
			push ('7');
			break;

		case ')':
			redValue = reduction2 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction2 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state2: unexpected event\n");
			return 1;
		}
	return 0;
	}
