#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE (10)

typedef struct
{
    int32_t arr[MAX_SIZE];
    int32_t top_index;
}Stack;

// Function to initialize the stack
void InitializeStack(Stack* stack); 

// Function to check if the stack is empty
bool IsStackEmpty(Stack* stack);

// Function to check if the stack is full
bool IsStackFull(Stack* stack);

// Funciton to push an element to the stack 
void Push(Stack* stack, int32_t value); 

// Function to pop an element from the stack
int32_t Pop(Stack* stack); 

// Function to peek at the top element of the stack 
int32_t Peek(Stack* stack);

