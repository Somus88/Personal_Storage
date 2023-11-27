#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
using namespace std;

typedef struct elmQ *address;

struct infotype
{
    string nama;
    int waktuDtg, nKoper, waktuAntri, waktuSelesai;
};

struct elmQ
{
    infotype info;
    address next;
};

struct queue
{
    address head, tail;
};

address alokasi(infotype info);
void createQueue(queue &Q);
void enQueue(queue &Q, address P);
void deQueue(queue &Q, address P);
void tambahAntri(queue &Q);
void printInfo(queue Q);


#endif // QUEUE_H_INCLUDED
