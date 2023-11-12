#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack tugas;
    createStack_1303220104(tugas);
    push_1303220104(tugas,'A');
    push_1303220104(tugas,'Y');
    push_1303220104(tugas,'A');
    push_1303220104(tugas,'J');
    push_1303220104(tugas,'B');
    push_1303220104(tugas,'A');
    push_1303220104(tugas,'L');
    push_1303220104(tugas,'F');
    push_1303220104(tugas,'I');
    printInfo_1303220104(tugas);
    cout << endl;
    for(int i = 0; i < 5; i++)
    {
        pop_1303220104(tugas);
    }
    printInfo_1303220104(tugas);
    return 0;
}
