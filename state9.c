#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 9 for the state machine.
int state9 (char event) {
	printf ("state9 proccessing %c event\n", event);

	switch(event) {
		case PLUS:
			processEvent (reduction1 ());
			processEvent (event);
			break;
		case MULT:
			push (event);
			push ('7');
			break;
		case RIGHT:
			processEvent (reduction1 ());
			processEvent (event);
			break;
		case DOLLAR:
			processEvent (reduction1 ());
			processEvent (event);
			break;
		default:
			printf ("state9: unexpected event\n");
			return 1;
		}
	return 0;
	}
