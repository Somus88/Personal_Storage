#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
using namespace std;

typedef bool boolean;
typedef int infotype;
typedef struct elmQ *address;

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
address findElmt(queue Q, infotype num);
bool queueEmpty(queue Q);
void createQueue(queue &Q);
void dealokasi(address P);
void enQueue(queue &Q, address P);
void deQueue(queue &Q, address P);
void printInfo(queue Q);
int nbOfElm(queue Q);
void ganjilGenap(queue &Q, queue &QGanjil, queue &QGenap);


#endif // QUEUE_H_INCLUDED
