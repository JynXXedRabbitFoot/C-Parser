#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state2 (char event) {
	int newState = 0;
	char reductionResult;

	printf ("state2 proccessing %c event\n", event);
	switch(event) {
		case '+':
			reductionResult = reduction2 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('1');
					newState = STATE1;
					break;
				case '4':
					push ('8');
					newState = STATE8;
					break;
				}
			break;

		case '*':
			push (event);
			push ('7');
			newState = STATE7;
			break;

		case ')':
			reductionResult = reduction2 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('1');
					newState = STATE1;
					break;
				case '4':
					push ('8');
					newState = STATE8;
					break;
				}
			break;

		case '$':
			reductionResult = reduction2 ();
			newState = peek ();
			push (reductionResult);
			switch(newState) {
				case '0':
					push ('1');
					newState = STATE1;
					break;
				case '4':
					push ('8');
					newState = STATE8;
					break;
				}
			break;

		default:
			printf ("state2: unexpected event\n");
			newState = STATE0;
			break;
		}
	return newState;
	}
