#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 3 for the state machine.
int state3 (char event) {
	printf ("state3 proccessing %c event\n", event);

	switch(event) {
		case PLUS:
			processEvent (reduction4 ());
			processEvent (event);
			break;

		case MULT:
			processEvent (reduction4 ());
			processEvent (event);
			break;

		case RIGHT:
			processEvent (reduction4 ());
			processEvent (event);
			break;

		case DOLLAR:
			processEvent (reduction4 ());
			processEvent (event);
			break;

		default:
			printf ("state3: unexpected event\n");
			return 1;
		}
	return 0;
	}
