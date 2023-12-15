//tipe soal Genap
#ifndef GRAF_H_INCLUDED
#define GRAF_H_INCLUDED
#include <iostream>
#define firstVertex(G) G.firstVertex
#define nextVertex(P) P->nextVertex
#define info(P) P->info
using namespace std;

typedef char infotype;
typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex
{
    infotype info;
    adrVertex nextVertex;
};

struct edge
{
    adrVertex vertex_1;
    adrVertex vertex_2;
    adrEdge nextEdge;
};

struct listOfVertex
{
    adrVertex firstVertex;
};

struct listOfEdge
{
    adrEdge firstEdge;
};

void createVertex(char newVertexID, adrVertex &v);
void initGraph(listOfVertex &G);
void addVertex(listOfVertex &G, char newVertexID);
void buildGraph(listOfVertex &G);
void showGraph(listOfVertex G);

#endif // GRAF_H_INCLUDED
