#include "list.h"

#ifndef STACK_H
#define STACK_H

// Stack
// Stores integer values inside

struct Stack
{
	List* list;
};

// Creates empty stack
Stack* stack_create();

// Deletes the stack
void stack_delete(Stack* stack);

// Pushes data on top of the stack
// Should be O(1) on average
void stack_push(Stack* stack, const char* str);

// Retrives the last element from the stack
Data stack_get_dt(const Stack* stack);

Operation stack_get_op(const Stack* stack);

// Removes the last element from the stack
// Should be O(1)
void stack_pop(Stack* stack);

// Returns true if the stack is empty
bool stack_empty(const Stack* stack);

#endif
