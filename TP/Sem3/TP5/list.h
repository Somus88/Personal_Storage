#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};
struct List
{
    address first;
};

void createList_1303220104(List &L);
address allocate_1303220104(infotype x);
void insertLast_1303220104(List &L, address P);
void printInfo_1303220104(List L);
address findMax_1303220104(List L);
void showMiddle_1303220104(List L);
int selectMenu_1303220104();

#endif // LIST_H_INCLUDED
