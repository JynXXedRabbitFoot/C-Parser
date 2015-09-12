#include "statemachine.h"
#include <stdio.h>

// returns the new state
int state1(char event)
{ 
  int newState = 0;

  printf("state1 proccessing %c event\n", event);
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
      printf("state1: unexpected event\n");
      newState = STATE0;
      break;
   }
   return newState;    
}
