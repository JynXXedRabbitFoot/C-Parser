#include "statemachine.h"
#include "stack.h"
#include <stdio.h>
//Dan Kruse
//State 0 for the state machine.
int state0 (char event) {

	printf ("state0 proccessing %c event\n", event);

	switch(event) {
		case ID:
			push (event);
			push ('5');
			break;

		case LEFT:
			push (event);
			push ('4');
			break;

		case 'E':
			push (event);
			push ('1');
			break;

		case 'T':
			push (event);
			push ('2');
			break;

		case 'F':
			push (event);
			push ('3');
			break;

		default:
			printf ("state0: unexpected event\n");
			return 1;
		}
	return 0;
	}
