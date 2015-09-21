#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>

int state11 (char event) {
	char redValue;

	printf ("state1 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction5 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			redValue = reduction5 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case ')':
			redValue = reduction5 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction5 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state10: unexpected event\n");
			return 1;
		}
	return 0;
	}
