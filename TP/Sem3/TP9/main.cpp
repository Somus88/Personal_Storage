#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack tugas;
    createStack(tugas);
    push(tugas,'A');
    push(tugas,'Y');
    push(tugas,'A');
    push(tugas,'J');
    push(tugas,'B');
    push(tugas,'A');
    push(tugas,'L');
    push(tugas,'F');
    push(tugas,'I');
    printInfo(tugas);
    cout << endl;
    for(int i = 0; i < 5; i++)
    {
        pop(tugas);
    }
    printInfo(tugas);
    return 0;
}
