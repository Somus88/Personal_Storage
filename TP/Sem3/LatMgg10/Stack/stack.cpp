#include <iostream>
#include "stack.h"
using namespace std;

void createStack(stack &S)
{
    top(S) = 0;
}
bool isEmpty(stack S)
{
    if(top(S) == 0)
    {
        return true;
    }else
    {
        return false;
    }
}
bool isFull(stack S)
{
    if(top(S) == 5)
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
        top(S)++;
        info(S)[top(S)] = x;
    }
}
koper pop(stack &S)
{
    koper x;
    x = info(S)[top(S)];
    top(S)--;
    return x;
}
void printInfo(stack S)
{
    int i;
    for(i = top(S); i >= 1; i--)
    {
        cout << (info(S)[i].nama) << endl;
        cout << "Berukuran " << (info(S)[i].ukuran) << endl;
    }
    if(isEmpty(S))
    {
        cout << "kosong astaghfirullahhaladzim kerja lembur bagai kuda" << endl;
    }
    cout << endl;
}
void inSementara(stack &S)
{
    infotype x;
    for(int i=0; i<5; i++){
        cout << "Nama Koper : ";
        cin >> x.nama;
        cout << "Ukuran Koper : ";
        cin >> x.ukuran;
        push(S, x);
    }
}
void inTroli(stack &S, stack &T1, stack &T2, int &time)
{
    int i = 5;
    infotype x;

    while(!isEmpty(S))
    {
        if(info(S)[i].ukuran == "B")
        {
            x = pop(S);
            push(T1, x);
            time = time + 2;
        }else if(info(S)[i].ukuran == "S")
        {
            x = pop(S);
            push(T2, x);
            time = time + 2;
        }
        i--;
    }
}
void inBagasi(stack &T1, stack &T2, stack &B1, stack &B2, int &time)
{
    infotype x;

    while(!isEmpty(T1))
    {
        x = pop(T1);
        push(B1, x);
        time = time + 5;
    }
    while(!isEmpty(T2))
    {
        x = pop(T2);
        push(B2, x);
        time = time + 7;
    }
}
