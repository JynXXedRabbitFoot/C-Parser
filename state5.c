#include "stack.h"
#include "statemachine.h"
#include "reduction.h"
#include <stdio.h>

int state5 (char event) {
	char redValue;
	printf ("state5 proccessing %c event\n", event);
	switch(event) {
		case '+':
			redValue = reduction6 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '*':
			redValue = reduction6 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case ')':
			redValue = reduction6 ();
			processEvent (redValue);
			processEvent (event);
			break;

		case '$':
			redValue = reduction6 ();
			processEvent (redValue);
			processEvent (event);
			break;

		default:
			printf ("state5: unexpected event\n");
			return 1;
		}
	return 0;
	}
