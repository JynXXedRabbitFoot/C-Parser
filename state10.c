#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 10 for the state machine.
int state10 (char event) {
	printf ("state1 proccessing %c event\n", event);

	switch(event) {
		case PLUS:
			processEvent (reduction3 ());
			processEvent (event);
			break;
		case MULT:
			processEvent (reduction3 ());
			processEvent (event);
			break;
		case RIGHT:
			processEvent (reduction3 ());
			processEvent (event);
			break;
		case DOLLAR:
			processEvent (reduction3 ());
			processEvent (event);
			break;
		default:
			printf ("state10: unexpected event\n");
			return 1;
		}
	return 0;
	}
