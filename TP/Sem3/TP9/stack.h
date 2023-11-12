#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define info(P) ((P)->info)
#define Top(S) ((S).Top)
typedef char infotype;

struct stack
{
    infotype info[15];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
int pop(stack &S);
void printInfo(stack S);

#endif // STACK_H_INCLUDED
