#include "stack.h"

void InitializeStack(Stack* stack)
{
    stack->top_index = -1;
}

bool IsStackEmpty(Stack* stack)
{
    return (stack->top_index == -1);
}

bool IsStackFull(Stack* stack)
{
    return (stack->top_index == MAX_SIZE - 1);
}

void Push(Stack* stack, int32_t value)
{
    if (IsStackFull(stack))
    {
        printf("Stack is full \n");
        return; 
    }

    stack->top_index++; 
    stack->arr[stack->top_index] = value;

    printf("Pushed %d at index [%d] \n", value, stack->top_index);
}

int32_t Pop(Stack* stack)
{
    if (IsStackEmpty(stack))
    {
        printf("Stack is empty \n");
        return -1;
    }

    int32_t top_index_val = stack->arr[stack->top_index];
    printf("Pooped %d from stack \n", top_index_val);

    stack->top_index--; 

    return top_index_val;
}

int32_t Peek(Stack* stack)
{
    if(IsStackEmpty(stack))
    {
        printf("Stack is empty \n");
        return -1;
    }

    printf("top_index element is: %d", stack->arr[stack->top_index]);
    return stack->arr[stack->top_index];
}







