#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    infotype masuk;
    address P;
    List L;
    createList(L);
    for(int i = 0; i<10; i++)
    {
        cout << "Masukkan angka: ";
        cin >> masuk;
        P = allocate(masuk);
        insertLast(L,P);
    }
    printInfo(L);
    return 0;
}
