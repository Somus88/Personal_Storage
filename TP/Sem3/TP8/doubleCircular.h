#ifndef DOUBLECIRCULAR_H_INCLUDED
#define DOUBLECIRCULAR_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
    address prev;
};
struct List
{
    address first;
    address last;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
address findElm(List L, infotype x);
void deleteFirst(List &L, address P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);
void deleteByValue(List &L, infotype x);
void reverseList(List L, List &L2);

#endif // DOUBLECIRCULAR_H_INCLUDED
