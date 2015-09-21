#include "statemachine.h"
#include "stack.h"
#include <stdio.h>


char currentState = -1;

void processEvent (char event) {

	currentState = peek (); /* remember, reductions do the pops! */

	printf ("Processing event: %c for state: %c \n", event, currentState);

	switch(currentState) {
		case STATE0:
			state0 (event);
			break;
		case STATE1:
			state1 (event);
			break;
		case STATE2:
			state2 (event);
			break;
		case STATE3:
			state3 (event);
			break;
		case STATE4:
			state4 (event);
			break;
		case STATE5:
			state5 (event);
			break;
		case STATE6:
			state6 (event);
			break;
		case STATE7:
			state7 (event);
			break;
		case STATE8:
			state8 (event);
			break;
		case STATE9:
			state9 (event);
			break;
		case STATEA:
			state10 (event);
			break;
		case STATEB:
			state11 (event);
			break;
		default:
			printf ("Unknown state %d for event  %c \n", currentState, event);
		}
	}
