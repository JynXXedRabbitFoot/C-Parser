#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>
//Dan Kruse
//State 3 for the state machine.
int state3 (char event) {
	char redValue;
	printf ("state3 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction4 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			redValue = reduction4 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case ')':
			redValue = reduction4 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction4 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state3: unexpected event\n");
			return 1;
		}
	return 0;
	}
