#include <iostream>
#include "DLL.h"
using namespace std;

bool isEmpty_1303220104(List L)
{
    if (first(L) == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}
void createList_1303220104(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}
address createNewElmt_1303220104(infotype x)
{
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;

    return P;
}
void insertFirst_1303220104(List &L, address P)
{
    address Q;
    if (isEmpty_1303220104(L))
    {
        first(L) = P;
        last(L) = P;
    }else
    {
        Q = first(L);
        next(P) = first(L);
        first(L) = P;
        prev(Q) = P;
    }
}
void insertAfter_1303220104(List &L, address &prec, address &P)
{
    if (isEmpty_1303220104(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = next(prec);
        prev(P) = prec;
        prev(next(prec)) = P;
        next(prec) = P;
    }
}
void insertLast_1303220104(List &L, address P)
{
    if(isEmpty_1303220104(L))
    {
        first(L) = P;
        last(L) = P;
    }else
    {
        prev(P) = L.last;
        next(last(L)) = P;
        last(L) = P;
    }
}
void deleteFirst_1303220104(List &L, address &P)
{
    if(next(first(L)) == NULL)
    {
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
    }else
    {
        P = first(L);
        first(L) = next(P);
        next(P)= NULL;
        prev(first(L)) = NULL;
    }
}
void deleteAfter_1303220104(List &L, address &Prec, address &P)
{
    if (first(L) == NULL)
    {
        cout << "List kosong" << endl;
    }
    else
    {
        P = next(Prec);
        if (next(P) == NULL)
        {
            next(Prec) = NULL;
            prev(P) = NULL;
        }
        else
        {
            next(Prec) = next(P);
            prev(next(P)) = Prec;
            next(P) = NULL;
            prev(P) = NULL;
        }
    }
}

void deleteLast_1303220104(List &L, address &P)
{
    if (first(L) == NULL)
    {
        cout << "List kosong" << endl;
    }
    else
    {
        P = first(L);
        if (next(P) == NULL)
        {
            first(L) = NULL;
        }
        else
        {
            while (next(P) != NULL)
            {
                P = next(P);
            }
            next(prev(P)) = NULL;
            prev(P) = NULL;
        }
    }
}
void concat_1303220104(List L1, List L2, List &L3)
{
    next(last(L1)) = first(L2);
    prev(first(L2)) = last(L1);
    first(L3) = first(L1);
}
address findLagu_1303220104(string Judul, List L)
{
    address Z = first(L);
    address adrTarget;

    while (Z != NULL)
    {
        if (info(Z).judul == Judul)
        {
            adrTarget = Z;
        }
        Z = next(Z);
    }
    return adrTarget;
}
void removeLagu_1303220104(string Judul, List &L)
{
    address P = findLagu_1303220104(Judul, L);
    address precDelete = NULL;
    if (P != NULL)
    {
        precDelete = P;
        if (P == first(L))
        {
            deleteFirst_1303220104(L,P);
        }else if (P == last(L))
        {
            deleteLast_1303220104(L,P);
        }else
        {
            deleteAfter_1303220104(L, precDelete, P);
        }
    }
}

void printAll_1303220104(List L)
{
    address P = first(L);

    while (P != NULL) {
        cout << info(P).judul << " by " << info(P).artist << " --- ";
        P = next(P);
    }
    cout << "NULL" << endl;
}
