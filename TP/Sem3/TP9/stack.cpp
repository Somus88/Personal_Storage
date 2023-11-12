#include <iostream>
#include "stack.h"
using namespace std;

void createStack_1303220104(stack &S)
{
    Top(S) = 0;
}
bool isEmpty_1303220104(stack S)
{
    if(Top(S) == 0)
    {
        return true;
    }else
    {
        return false;
    }
}
bool isFull_1303220104(stack S)
{
    if(Top(S) == 15)
    {
        return true;
    }else
    {
        return false;
    }
}
void push_1303220104(stack &S, infotype x)
{
    if(!isFull_1303220104(S))
    {
        Top(S)++;
        info(&S)[Top(S)] = x;
    }
}
int pop_1303220104(stack &S)
{
    infotype x;
    x = info(&S)[Top(S)];
    Top(S)--;
    return x;
}
void printInfo_1303220104(stack S)
{
    int i;
    for(i = Top(S); i >= 1; i--)
    {
        cout << (info(&S)[i]);
    }
}
