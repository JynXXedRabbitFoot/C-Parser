#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>

int state9 (char event) {
	char redValue;

	printf ("state9 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction1 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			push (event);
			push ('7');
			break;

		case ')':
			redValue = reduction1 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction1 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state9: unexpected event\n");
			break;
		}
	return 0;
	}
