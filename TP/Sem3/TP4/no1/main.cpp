#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    infotype masuk;
    address P;
    List L;
    createList(L);
    cout << "Masukkan angka: ";
    cin >> masuk;
    P = allocate(masuk);
    insertFirst(L,P);
    printInfo(L);
    cout << "Masukkan angka: ";
    cin >> masuk;
    P = allocate(masuk);
    insertFirst(L,P);
    printInfo(L);
    cout << "Masukkan angka: ";
    cin >> masuk;
    P = allocate(masuk);
    insertFirst(L,P);
    printInfo(L);
    return 0;
}
