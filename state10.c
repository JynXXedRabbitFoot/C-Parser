#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>

int state10 (char event) {
	char redValue;

	printf ("state1 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction3 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			redValue = reduction3 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case ')':
			redValue = reduction3 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction3 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state10: unexpected event\n");
			break;
		}
	return 0;
	}
