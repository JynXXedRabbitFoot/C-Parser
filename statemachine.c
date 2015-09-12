#include "statemachine.h"
#include "stack.h"
#include <stdio.h>


static int currentState = -1;

void processEvent(char event) {

   currentState = peek(); /* remember, reductions do the pops! */

   printf("Processing event: %c for state: %c \n", event, currentState);

   switch (currentState) {
     case STATE0:
        currentState = state0(event);
	break;
     case STATE1:
        currentState = state1(event);
	break;
     case STATE2:
        currentState = state2(event);
	break;
     case STATE3:
        currentState = state3(event);
	break;
     case STATE4:
        currentState = state4(event);
	break;
     case STATE5:
        currentState = state5(event);
	break;
     case STATE6:
        currentState = state6(event);
	break;
     case STATE7:
        currentState = state7(event);
	break;
     case STATE8:
        currentState = state8(event);
	break;
     case STATE9:
        currentState = state9(event);
	break;
     case STATEA:
        currentState = state10(event);
	break;
     case STATEB:
        currentState = state11(event);
	break;

     default:
        printf("Unknown state %d for event  %c \n",currentState, event);
   }
}
