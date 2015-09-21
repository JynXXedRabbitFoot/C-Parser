#include "statemachine.h"
#include "stack.h"
#include <stdio.h>

int state0 (char event) {

	printf ("state0 proccessing %c event\n", event);

	switch(event) {
		case 'A':
			push (event);
			push ('5');
			break;

		case '(':
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
