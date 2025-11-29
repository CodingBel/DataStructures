#include "stack.h"

void InitializeStack(Stack* stack)
{
    stack->top = -1;
}

bool IsStackEmpty(Stack* stack)
{
    return (stack->top == -1);
}

bool IsStackFull(Stack* stack)
{
    return (stack->top == MAX_SIZE - 1);
}

void Push(Stack* stack, int32_t value)
{
    if (IsStackFull(stack))
    {
        printf("Stack is full \n");
        return; 
    }

    stack->top++; 
    stack->arr[stack->top] = value;

    printf("Pushed %d at index [%d] \n", value, stack->top);
}

int32_t Pop(Stack* stack)
{
    if (IsStackEmpty(stack))
    {
        printf("Stack is empty \n");
        return -1;
    }

    int32_t top_val = stack->arr[stack->top];
    printf("Pooped %d from stack \n", top_val);

    stack->top--; 

    return top_val;
}

int32_t Peek(Stack* stack)
{
    if(IsStackEmpty(stack))
    {
        printf("Stack is empty \n");
        return -1;
    }

    printf("Top element is: %d", stack->arr[stack->top]);
    return stack->arr[stack->top];
}







