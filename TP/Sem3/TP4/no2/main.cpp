#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    infotype masuk;
    address P;
    List L;
    createList(L);
    cout << "Masukkan NIM perdigit: " << endl;
    for(int i = 1; i<=10; i++)
    {
        cout << "Digit " << i << ": ";
        cin >> masuk;
        P = allocate(masuk);
        insertLast(L,P);
    }
    cout << "Isi list : ";
    printInfo(L);
    return 0;
}
