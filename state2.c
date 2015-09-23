#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 2 for the state machine.
int state2 (char event) {
	printf ("state2 proccessing %c event\n", event);
	switch(event) {
		case PLUS:
			processEvent (reduction2 ());
			processEvent (event);
			break;

		case MULT:
			push (event);
			push ('7');
			break;

		case RIGHT:
			processEvent (reduction2 ());
			processEvent (event);
			break;

		case DOLLAR:
			processEvent (reduction2 ());
			processEvent (event);
			break;

		default:
			printf ("state2: unexpected event\n");
			return 1;
		}
	return 0;
	}
