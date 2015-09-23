#include "stack.h"
#include "statemachine.h"
#include <stdio.h>
//Dan Kruse
//State 4 for the state machine.
int state4 (char event) {

	printf ("state4 proccessing %c event\n", event);

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
			push ('8');
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
			printf ("state4: unexpected event\n");
			return 1;
		}
	return 0;
	}
