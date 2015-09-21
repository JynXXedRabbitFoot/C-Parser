#include "stack.h"
#include "statemachine.h"
#include <stdio.h>

int state6 (char event) {

	printf ("state6 proccessing %c event\n", event);
	switch(event) {
		case 'A':
			push (event);
			push ('5');
			break;

		case '(':
			push (event);
			push ('4');
			break;

		case 'T':
			push (event);
			push ('9');
			break;

		case 'F':
			push (event);
			push ('3');
			break;

		default:
			printf ("state6: unexpected event\n");
			break;
		}
	return 0;
	}
