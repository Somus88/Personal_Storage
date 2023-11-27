#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    queue Q;
    address P;

    createQueue(Q);
    for(int i = 0; i < 5; i++)
    {
        tambahAntri(Q);
        printInfo(Q);
        cout << endl;
    }
    deQueue(Q, P);
    printInfo(Q);

    return 0;
}
