#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define info(P) ((P).info)
#define top(S) ((S).top)
using namespace std;
typedef struct koper infotype;

struct koper
{
    string nama, ukuran;
};

struct stack
{
    infotype info[10];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
koper pop(stack &S);
void printInfo(stack S);
void inSementara(stack &S);
void inTroli(stack &S, stack &T1, stack &T2, int &time);
void inBagasi(stack &T1, stack &T2, stack &B1, stack &B2, int &time);

#endif // STACK_H_INCLUDED
