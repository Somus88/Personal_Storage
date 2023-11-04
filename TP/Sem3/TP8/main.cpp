#include <iostream>
#include "doubleCircular.h"
using namespace std;

int main()
{
    List L;
    List L2;
    createList(L);
    insertFirst(L, alokasi(1));
    insertLast(L, alokasi(5));
    insertLast(L, alokasi(15));
    insertLast(L, alokasi(25));
    insertLast(L, alokasi(35));
    insertLast(L, alokasi(45));
    insertLast(L, alokasi(55));
    insertLast(L, alokasi(65));
    insertLast(L, alokasi(75));
    insertLast(L, alokasi(85));
    insertAfter(L, findElm(L, 75), alokasi(80));
    printInfo(L);

    deleteByValue(L,5);
    deleteByValue(L,100);
    deleteByValue(L,45);
    deleteByValue(L,85);

    printInfo(L);

    createList(L2);
    reverseList(L,L2);
    printInfo(L2);
    cout << "Terdapat angka 1 dan 80 karena mereka adalah bukti kalau Insert First dan Insert After berkerja" << endl;
    return 0;
}
