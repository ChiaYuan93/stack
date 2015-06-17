#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include "TestStack.h"

Stack *stackCreate() {
  Stack *stack = malloc(sizeof (Stack));
  stack->head = NULL;
  stack->tail = NULL;
  
  return stack;
}

StackElement *stackElementCreate(int data){
  StackElement *elem = malloc(sizeof (StackElement));
  
  if (elem == NULL){
    exit(1);
  }
  
  elem->data = data;
  elem->next = NULL;
  
  return elem;
  
}

void stackAdd(Stack *stack, StackElement *elem){
  
  if (stack->head == NULL){
    stack->head = stack->tail = elem;
    elem->next = NULL;
  }
  
  else{
    elem->next=stack->head;
    stack->head = elem;
  }

}
     