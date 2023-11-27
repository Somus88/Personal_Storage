#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack S, T1, T2, B1, B2;
    int time = 0;

    createStack(S);
    createStack(T1);
    createStack(T2);
    createStack(B1);
    createStack(B2);

    cout << "Step 1" << endl;
    inSementara(S);
    cout << "Posisi Semula" << endl;
    printInfo(S);

    cout << "Step 2" << endl;
    inTroli(S, T1, T2, time);
    cout << "Posisi Semula" << endl;
    printInfo(S);
    cout << "Troli 1" << endl;
    printInfo(T1);
    cout << "Troli 2" << endl;
    printInfo(T2);
    cout << "waktu sekarang: " << time << endl;

    cout << "Step 3" << endl;
    inBagasi(T1, T2, B1, B2, time);
    cout << "Troli 1" << endl;
    printInfo(T1);
    cout << "Troli 2" << endl;
    printInfo(T2);
    cout << "Bagasi 1" << endl;
    printInfo(B1);
    cout << "Bagasi 2" << endl;
    printInfo(B2);
    cout << "waktu sekarang: " << time << endl;

    cout << "Step 4" << endl;
    time = time + 15;
    cout << "waktu total: " << time << endl;

    return 0;
}
