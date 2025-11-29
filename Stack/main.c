#include "stack.h"

int main ()
{
    Stack myStack; 

    InitializeStack(&myStack);

    for (int8_t i = 0; i < MAX_SIZE; i++)
    {
        Push(&myStack, i * 10);
    }

    printf("Top is: %d \n", Pop(&myStack));

    Push(&myStack, 12);

     printf("Top is: %d \n", Pop(&myStack));

    return 0;
}