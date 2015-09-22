#include "stack.h"
#include "statemachine.h"
#include <stdio.h>
//Dan Kruse
//State 7 for the state machine.
int state7 (char event) {

	printf ("state7 proccessing %c event\n", event);
	switch(event) {
		case 'A':
			push (event);
			push ('5');
			break;
		case '(':
			push (event);
			push ('4');
			break;
		case 'F':
			push (event);
			push ('a');
			break;
		default:
			printf ("state7: unexpected event\n");
			return 1;
		}
	return 0;
	}
