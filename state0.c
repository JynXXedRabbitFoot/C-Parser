#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state0 (char event) {
	int newState = 0;

	printf ("state0 proccessing %c event\n", event);

	switch(event) {
		case 'A':
			push (event);
			push ('5');
			newState = STATE5;
			break;

		case '(':
			push (event);
			push ('4');
			newState = STATE4;
			break;

		case 'E':
			push (event);
			push ('1');
			newState = STATE1;
			break;

		case 'T':
			push (event);
			push ('2');
			newState = STATE2;
			break;

		case 'F':
			push (event);
			push ('3');
			newState = STATE3;
			break;

		default:
			printf ("state0: unexpected event\n");
			newState = STATE0;
			break;
		}
	return newState;
	}
