#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 0 for the state machine.
int state5 (char event) {
	printf ("state5 proccessing %c event\n", event);

	switch(event) {
		case PLUS:
			processEvent (reduction6 ());
			processEvent (event);
			break;
		case MULT:
			processEvent (reduction6 ());
			processEvent (event);
			break;
		case RIGHT:
			processEvent (reduction6 ());
			processEvent (event);
			break;
		case DOLLAR:
			processEvent (reduction6 ());
			processEvent (event);
			break;
		default:
			printf ("state5: unexpected event\n");
			return 1;
		}
	return 0;
	}
