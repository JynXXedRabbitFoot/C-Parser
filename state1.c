#include "stack.h"
#include "statemachine.h"
#include <stdio.h>

int state1 (char event) {

	printf ("state1 proccessing %c event\n", event);
	switch(event) {

		case '+':
			push (event);
			push ('6');
			break;

		case '$':
			//ACCEPT???????????
			break;

		default:
			printf ("state1: unexpected event\n");
			break;
		}
	return 0;
	}
