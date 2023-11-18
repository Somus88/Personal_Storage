#include <iostream>
#include "queue.h"
using namespace std;

address alokasi(infotype info)
{
    address p = new elmQ;
    info(p) = info;
    next(p) = Nil;

    return p;
}
address findElmt(queue Q, infotype num)
{
    address P;
    boolean found;

    P = head(Q);
    found = false;

    while(P != Nil && found == false)
    {
        if(info(P) == num)
        {
            found = true;
        }else
        {
            P = next(P);
        }
    }
    return P;
}
bool queueEmpty(queue Q)
{
    if(head(Q) == Nil)
    {
        return true;
    }else
    {
        return false;
    }
}
void createQueue(queue &Q)
{
    head(Q) = Nil;
}
void dealokasi(address P)
{
    delete P;
}
void enQueue(queue &Q, address P)
{
    if(queueEmpty(Q)) /* kondisi kosong */
    {
        head(Q) = P;
        tail(Q) = P;
    }else /* kondisi tidak kosong */
    {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void deQueue(queue &Q, address P)
{
    if(queueEmpty(Q)) /* kondisi kosong */
    {
        cout << "Queue kosong" << endl;
    }else if(next(head(Q)) == Nil) /* kondisi satu elemen */
    {
        P = head(Q);
        head(Q) = Nil;
        dealokasi(P);
    }else /* kondisi banyak elemen */
    {
        P = head(Q);
        head(Q) = next(P);
        next(P) = Nil;
    }
}
void printInfo(queue Q)
{
    address P;
    int i = 1;

    P = head(Q);

    if(P == Nil) /* kondisi kosong */
    {
        cout << "Queue kosong" << endl;
    }else
    {
        while(P != Nil)
        {
            cout << "Antrian ke-" << i << ": " << info(P) << endl;
            P = next(P);
            i++;
        }
    }
}
int nbOfElm(queue Q)
{
    int numOfElmt = 0;

    address P;
    P = head(Q);

    while(P != Nil)
    {
        numOfElmt++;
        P = next(P);
    }
    return numOfElmt;
}
void ganjilGenap(queue &Q, queue &QGanjil, queue &QGenap)
{
    address P = head(Q);
    address temp, emptyThis;

    while(P != Nil)
    {
        if(info(P) % 2 == 0)
        {
            temp = alokasi(info(P));
            enQueue(QGenap, temp);
        }else
        {
            temp = alokasi(info(P));
            enQueue(QGanjil, temp);
        }
        P = next(P);
        deQueue(Q, emptyThis);
        dealokasi(emptyThis);
    }
}
