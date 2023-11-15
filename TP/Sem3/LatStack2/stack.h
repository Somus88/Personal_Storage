#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define info(P) ((P).info)
#define Top(S) ((S).Top)
using namespace std;
typedef struct mhs infotype;
const int nmax = 45;

struct mhs
{
    string nama;
    string nim;
    float ipk;
};

struct stack
{
    infotype info[nmax];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
mhs pop(stack &S);
void printInfo(stack S);
void findData(stack &S);
void moveData(stack &S, stack &S2);
void hapusStack(stack &S);
void addNewData(stack &S, mhs &newdata);
mhs deleteData(stack &S);
void add(stack &S, string nama, string nip, float nilai);

#endif // STACK_H_INCLUDED
