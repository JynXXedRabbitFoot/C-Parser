#include "stack.h"
#include "statemachine.h"
#include <stdio.h>

int state8 (char event) {

	printf ("state8 proccessing %c event\n", event);
	switch(event) {
		case '+':
			push (event);
			push ('6');
			break;

		case ')':
			push (event);
			push ('b');
			break;

		default:
			printf ("state8: unexpected event\n");
			break;
		}
	return 0;
	}
