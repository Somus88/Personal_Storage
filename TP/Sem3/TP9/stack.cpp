#include <iostream>
#include "stack.h"
using namespace std;

void createStack(stack &S)
{
    Top(S) = 0;
}
bool isEmpty(stack S)
{
    if(Top(S) == 0)
    {
        return true;
    }else
    {
        return false;
    }
}
bool isFull(stack S)
{
    if(Top(S) == 15)
    {
        return true;
    }else
    {
        return false;
    }
}
void push(stack &S, infotype x)
{
    if(!isFull(S))
    {
        Top(S)++;
        info(&S)[Top(S)] = x;
    }
}
int pop(stack &S)
{
    infotype x;
    x = info(&S)[Top(S)];
    Top(S)--;
    return x;
}
void printInfo(stack S)
{
    int i;
    for(i = Top(S); i >= 1; i--)
    {
        cout << (info(&S)[i]);
    }
}
