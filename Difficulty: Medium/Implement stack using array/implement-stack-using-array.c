//Back-end complete function Template for C
#include <stdio.h>
#include <stdlib.h>

// Define stack structure
typedef struct {
    int* arr;     // Array to store stack elements
    int capacity; // Maximum number of elements
    int topIndex; // Index of the top element
} myStack;

// Constructor equivalent
myStack* createStack(int n) {
    myStack* stack = (myStack*)malloc(sizeof(myStack));
    stack->capacity = n;
    stack->arr = (int*)malloc(n * sizeof(int));
    stack->topIndex = -1; // stack is empty initially
    return stack;
}

// Check if stack is empty
int isEmpty(myStack* stack) {
    return stack->topIndex == -1;
}

// Check if stack is full
int isFull(myStack* stack) {
    return stack->topIndex == stack->capacity - 1;
}

// Push an element on top of the stack
void push(myStack* stack, int x) {
    if (isFull(stack)) {
        return; // ignore if full
    }
    stack->arr[++stack->topIndex] = x;
}

// Pop the top element of the stack
void pop(myStack* stack) {
    if (!isEmpty(stack)) {
        stack->topIndex--; // just remove the element
    }
}

// Peek the top element of the stack
int peek(myStack* stack) {
    if (isEmpty(stack)) {
        return -1; // return -1 if empty
    }
    return stack->arr[stack->topIndex];
}

// Destructor equivalent (to free memory)
void freeStack(myStack* stack) {
    free(stack->arr);
    free(stack);
}
