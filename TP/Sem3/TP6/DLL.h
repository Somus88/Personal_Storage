#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev
using namespace std;
typedef struct lagu infotype;
typedef struct elmlist *address;

struct lagu
{
    string judul;
    string artist;
};

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

bool isEmpty_1303220104(List L);
void createList_1303220104(List &L);
address createNewElmt_1303220104(infotype x);
void insertFirst_1303220104(List &L, address P);
void insertAfter_1303220104(List &L, address &prec, address &P);
void insertLast_1303220104(List &L, address P);
void deleteFirst_1303220104(List &L, address &P);
void deleteAfter_1303220104(List &L, address &Prec, address &P);
void deleteLast_1303220104(List &L, address &P);
void concat_1303220104(List L1, List L2, List &L3);
address findLagu_1303220104(string Judul, List L);
void removeLagu_1303220104(string Judul, List &L);
void printAll_1303220104(List L);


#endif // DLL_H_INCLUDED
