#include <iostream>
#include "list.h"
using namespace std;

void createList(List &L)
{
    first(L) = NULL;
}
address allocate(infotype x)
{
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}
void insertFirst(List &L, address P)
{
    next(P) = first(L);
    first(L) = P;
}
void insertLast(List &L, address P)
{
    address Q;
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        Q = first(L);
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }

}
void insertAfter(List &L, address prec, address P)
{
    next(P) = next(prec);
    next(prec) = P;
}
void deleteLast(List &L, address P)
{
    address Q;
    if (next(first(L))==NULL)
    {
        P = first(L);
        first(L) = NULL;
    }else
    {
        P = next(first(L));
        Q = first(L);
        while (next(P) != NULL)
        {
            P = next(P);
            Q = next(Q);
        }
        next(Q) = NULL;
    }
}
void deleteAfter(List &L, address prec, address P)
{
    if (next(first(L)) == NULL)
    {
        P = first(L);
        first(L) = NULL;
    }else
    {
        P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
}
void printInfo(List L)
{
    address p = first(L);
    while (p != NULL)
    {
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}
