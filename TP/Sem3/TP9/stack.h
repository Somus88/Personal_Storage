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

void createStack_1303220104(stack &S);
bool isEmpty_1303220104(stack S);
bool isFull_1303220104(stack S);
void push_1303220104(stack &S, infotype x);
int pop_1303220104(stack &S);
void printInfo_1303220104(stack S);

#endif // STACK_H_INCLUDED
