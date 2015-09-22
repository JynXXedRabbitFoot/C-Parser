#include "statemachine.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
//Dan Kruse
//State machine.

char currentState = -1;

// Processes an event which drives a change in state.
void processEvent (char event) {
	int ProcessedCorrectly = 0;
	currentState = peek ();

	printf ("Processing event: %c for state: %c \n", event, currentState);

	switch(currentState) {
		case STATE0:
			ProcessedCorrectly = state0 (event);
			break;
		case STATE1:
			ProcessedCorrectly = state1 (event);
			break;
		case STATE2:
			ProcessedCorrectly = state2 (event);
			break;
		case STATE3:
			ProcessedCorrectly = state3 (event);
			break;
		case STATE4:
			ProcessedCorrectly = state4 (event);
			break;
		case STATE5:
			ProcessedCorrectly = state5 (event);
			break;
		case STATE6:
			ProcessedCorrectly = state6 (event);
			break;
		case STATE7:
			ProcessedCorrectly = state7 (event);
			break;
		case STATE8:
			ProcessedCorrectly = state8 (event);
			break;
		case STATE9:
			ProcessedCorrectly = state9 (event);
			break;
		case STATEA:
			ProcessedCorrectly = state10 (event);
			break;
		case STATEB:
			ProcessedCorrectly = state11 (event);
			break;
		default:
			printf ("Unknown state %d for event  %c \n", currentState, event);
			ProcessedCorrectly = 1;
		}
	if(ProcessedCorrectly == 1) {
		printf ("The Grammar Failed The Syntax Machine");
		exit (0);
		}
	}
