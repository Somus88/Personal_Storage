#include <iostream>
#include "stack.h"
using namespace std;

void createStack(stack &S)
{
    Top(S) = 0;
}
bool isEmpty(stack S)
{
    if(Top(S) == 0)
    {
        return true;
    }else
    {
        return false;
    }
}
bool isFull(stack S)
{
    if(Top(S) == 15)
    {
        return true;
    }else
    {
        return false;
    }
}
void push(stack &S, infotype x)
{
    if(!isFull(S))
    {
        Top(S)++;
        info(S)[Top(S)] = x;
    }
}
mhs pop(stack &S)
{
    mhs x;
    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}
void printInfo(stack S)
{
    int i;
    for(i = Top(S); i >= 1; i--)
    {
        cout << (info(S)[i].nama) << endl;
        cout << (info(S)[i].nim) << endl;
        cout << (info(S)[i].ipk) << endl;
    }
    if(isEmpty(S))
    {
        cout << "kosong astaghfirullahhaladzim kerja lembur bagai kuda" << endl;
    }
    cout << endl;
}

void findData(stack &S)
{
    string cari;
    stack temp;
    mhs tempInfo;
    bool found;
    createStack(temp);
    cout << "Masukkan nama yang mau dicari" << endl;
    cin >> cari;

    while(!isEmpty(S))
    {
        if(info(S)[Top(S)].nama == cari)
        {
            cout << info(S)[Top(S)].nama << endl << info(S)[Top(S)].nim << endl << info(S)[Top(S)].ipk << endl;
            found = true;
        }
        tempInfo = pop(S);
        push(temp,tempInfo);
    }

    while(!isEmpty(temp))
    {
        tempInfo = pop(temp);
        push(S,tempInfo);
    }
    if(!found)
    {
        cout << "Data tidak ditemukan" << endl;
    }
    cout << endl;
}

void moveData(stack &S, stack &S2)
{
    stack temp;
    mhs tempInfo;
    createStack(temp);
    while(!isEmpty(S))
    {
        tempInfo = pop(S);
        push(temp,tempInfo);
    }

    while(!isEmpty(temp))
    {
        tempInfo = pop(temp);
        push(S2,tempInfo);
    }
}

void hapusStack(stack &S)
{
    while(!isEmpty(S))
    {
        pop(S);
    }
}

void addNewData(stack &S, mhs &newdata)
{
    if(!isFull(S))
    {
        Top(S)++;
        info(S)[Top(S)] = newdata;
    }else
    {
        cout << "FULL" << endl;
    }
}

mhs deleteData(stack &S)
{
    mhs x;
    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}

void add(stack &S, string nama, string nip, float nilai) //ubah float sesuai pemakaian
{
    mhs masuk;
    masuk.nama = nama;
    masuk.nim = nip;
    masuk.ipk = nilai;
    if(!isFull(S))
    {
        Top(S)++;
        info(S)[Top(S)] = masuk;
    }else
    {
        cout << "FULL" << endl;
    }
}
