#include "stack.h"

int main ()
{
    Stack myStack; 

    InitializeStack(&myStack);

    for (int8_t i = 0; i < MAX_SIZE; i++)
    {
        Push(&myStack, i * 10);
    }

    printf("top_index is: %d \n", Pop(&myStack));

    Push(&myStack, 12);

     printf("top_index is: %d \n", Pop(&myStack));

    return 0;
}