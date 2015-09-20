#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state1 (char event) {
	int newState = 0;

	printf ("state1 proccessing %c event\n", event);
	switch(event) {

		case '+':
			push (event);
			push ('6');
			newState = STATE6;
			break;

		case '$':
			newState = -1;//ACCEPT???????????
			break;

		default:
			printf ("state1: unexpected event\n");
			newState = STATE0;
			break;
		}
	return newState;
	}
