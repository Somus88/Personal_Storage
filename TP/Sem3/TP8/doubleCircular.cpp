#include <iostream>
#include "doubleCircular.h"
using namespace std;

void createList(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}
address alokasi(infotype x)
{
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}
void dealokasi(address &P)
{
    delete P;
    P = NULL;
}
void insertFirst(List &L, address P)
{
    if(first(L) == NULL)
    {
        first(L) = P;
        next(P) = first(L);
        prev(P) = first(L);
        last(L) = P;
    }else
    {
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        first(L) = P;
    }
}
void insertAfter(List &L, address Prec, address P)
{
    if(first(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }else
    {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}
void insertLast(List &L, address P)
{
    if(first(L) == NULL)
    {
        first(L) = P;
        next(P) = first(L);
        prev(P) = first(L);
        last(L) = P;
    }else
    {
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        last(L) = P;
    }
}
address findElm(List L, infotype x)
{
    if (first(L) == NULL) {
        return NULL;
    }

    address p = first(L);
    do {
        if (info(p) == x) {
            return p;
        }
        p = next(p);
    } while (p != first(L));

    return NULL;
}
void deleteFirst(List &L, address P)
{
    if(next(first(L)) == NULL)
    {
        P = first(L);
        next(P) = NULL;
        prev(P) = NULL;
        first(L) = NULL;
        last(L) = NULL;
        dealokasi(P);
    }else
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(P) = NULL;
        prev(first(L)) = last(L);
        next(last(L)) = first(L);
        dealokasi(P);
    }
}
void deleteAfter(List &L, address Prec, address &P)
{
    if(first(L) == NULL)
    {
        cout << "List kosong" << endl;
    }else
    {
        P = next(Prec);
        if(next(P) == NULL)
        {
            next(Prec) = NULL;
            prev(P) = NULL;
        }else
        {
            next(Prec) = next(P);
            prev(next(P)) = Prec;
            next(P) = NULL;
            prev(P) = NULL;
        }
    }
}
void deleteLast(List &L, address &P)
{
    if(first(L) == NULL)
    {
        cout << "List kosong" << endl;
    }else
    {
        P = last(L);
        last(L) = prev(last(L));
        prev(P) = NULL;
        next(P) = NULL;
        prev(first(L)) = last(L);
        next(last(L)) = first(L);
        dealokasi(P);
    }
}
void printInfo(List L)
{
    address P = first(L);
    do
    {
        cout << info(P) << " ";
        P = next(P);
    }while(P != first(L));
    cout << endl;
}
void deleteByValue(List &L, infotype x)
{
    address value = findElm(L, x);
    address precDel = NULL;
    if(value != NULL)
    {
        precDel = value;
        if(value == first(L))
        {
            deleteFirst(L, value);
        }else if(value == last(L))
        {
            deleteLast(L, value);
        }else
        {
            deleteAfter(L, prev(precDel), value);
        }
    }
}
void reverseList(List L, List &L2)
{
    address P = first(L);

    if(first(L) != NULL)
    {
        do
        {
            insertFirst(L2, alokasi(info(P)));
            P = next(P);
        }while(P != first(L));
    }
}
