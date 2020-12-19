#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

struct stack 
{
    int top;
    unsigned capacity;
    int * array;
};

struct stack * createStack(unsigned capacity)
{
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    stk->capacity = capacity;
    stk->top = -1;
    stk->array = (int*)malloc(stk->capacity*sizeof(int));
    return stk;    
}

int isFull(struct stack *stk)
{
    return stk->top == stk->capacity-1;
}

int isEmpty(struct stack *stk)
{
    return stk->top ==-1;
}

void push(struct stack *stk, int val)
{
    if(isFull(stk))
    {
        return;
    }

    else
    {
        stk->array[++stk->top] = val;
        printf("%d pushed to stack\n",val);
    }
    
}

int pop(struct stack *stk)
{
    if(isEmpty(stk))
    {
        printf("Stack Empty");
        return -1;
    }

    else
    {
        return stk->array[stk->top--];
    }
}

int peek(struct stack *stk)
{
    if(isEmpty(stk))
    {
        return -1;
    }

    else
    {
        return stk->array[stk->top];
    }
}

int main()
{
    struct stack *stk = createStack(10);
    push(stk,23);
    push(stk,34);
    printf("%d popped out\n",pop(stk));
    peek(stk);
    return 0;
}

