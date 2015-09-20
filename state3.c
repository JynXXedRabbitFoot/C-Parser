#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state3 (char event) {
	int newState = 0;
	char reductionResult;

	printf ("state1 proccessing %c event\n", event);
	switch(event) {
		case '+':
			reductionResult = reduction4 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('2');
					newState = STATE2;
					break;
				case '4':
					push ('2');
					newState = STATE2;
					break;
				case '6':
					push ('9');
					newState = STATE9;
					break;
				}
			break;

		case '*':
			reductionResult = reduction4 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('2');
					newState = STATE2;
					break;
				case '4':
					push ('2');
					newState = STATE2;
					break;
				case '6':
					push ('9');
					newState = STATE9;
					break;
				}
			break;

		case ')':
			reductionResult = reduction4 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('2');
					newState = STATE2;
					break;
				case '4':
					push ('2');
					newState = STATE2;
					break;
				case '6':
					push ('9');
					newState = STATE9;
					break;
				}
			break;

		case '$':
			reductionResult = reduction4 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('2');
					newState = STATE2;
					break;
				case '4':
					push ('2');
					newState = STATE2;
					break;
				case '6':
					push ('9');
					newState = STATE9;
					break;
				}
			break;

		default:
			printf ("state3: unexpected event\n");
			newState = STATE0;
			break;
		}
	return newState;
	}
