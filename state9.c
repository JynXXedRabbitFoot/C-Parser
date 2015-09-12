#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state9(char event)
{ 
  int newState = 0;

  printf("state9 proccessing %c event\n", event);
  switch (event)
  {
    case 'i':
      newState = -1; 
      break;

    case '+':
      newState = -1; 
      break;

    case '*':
      newState = -1; 
      break;

    case '(':
      newState = -1; 
      break;

    case ')':
      newState = -1; 
      break;

    case '$':
      newState = -1; 
      break;

    case 'E':
      newState = -1; 
      break;

    case 'T':
      newState = -1; 
      break;

    case 'F':
      newState = -1; 
      break;

    default:
      printf("state9: unexpected event\n");
      newState = STATE0;
      break;
   }
   return newState;    
}
