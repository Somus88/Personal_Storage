//tipe soal genap
#include <iostream>
#include "graf.h"
using namespace std;

void createVertex(char newVertexID, adrVertex &v)
{
    adrVertex P = new vertex;
    info(P) = newVertexID;
    nextVertex(P) = NULL;
    v = P;
}

void initGraph(listOfVertex &G)
{
    firstVertex(G) = NULL;
}

void addVertex(listOfVertex &G, char newVertexID)
{
    adrVertex P = NULL;
    adrVertex Q = NULL;
    createVertex(newVertexID, P);
    if(firstVertex(G) == NULL)
    {
        firstVertex(G) = P;
    }else
    {
        Q = firstVertex(G);
        while(nextVertex(Q) != NULL)
        {
            Q = nextVertex(Q);
        }
        nextVertex(Q) = P;
    }
}

void buildGraph(listOfVertex &G)
{
    adrVertex Q = NULL;
    char id;
    cout << "Masukkan ID: ";
    cin >> id;
    while(id < '0' || id > '9')
    {
        Q = firstVertex(G);
        bool check = true;
        while(Q != NULL)
        {
            if(info(Q) == id)
            {
                check = false;
            }
            Q = nextVertex(Q);

        }
        if(check)
        {
            addVertex(G, id);
        }
        cout << "Masukkan ID: ";
        cin >> id;
    }
    cout << "selesai" << endl;
}

void showGraph(listOfVertex G)
{
    adrVertex P = firstVertex(G);
    while(P != NULL)
    {
        cout << info(P) << endl;
        P = nextVertex(P);
    }
}
