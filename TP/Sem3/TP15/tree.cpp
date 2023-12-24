#include <iostream>
#include "tree.h"
using namespace std;

bool emptyTree(binTree root)
{
    if(root == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}

void createTree(binTree &root)
{
    root = NULL;
}

adrNode newNode(infotype x)
{
    adrNode p = new node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
}

adrNode findNode(adrNode root, infotype x)
{
    if(root == NULL || (info(root) == x))
    {
        return root;
    }else
    {
        if(info(root) > x)
        {
            return findNode(left(root), x);
        }else if(info(root) < x)
        {
            return findNode(right(root), x);
        }

    }

}

void insertNode(adrNode &root, adrNode p)
{
    if(root == NULL)
    {
        root = p;
    }else
    {
        if(info(root) > info(p))
        {
            insertNode(left(root), p);
        }else if(info(root) < info(p))
        {
            insertNode(right(root), p);
        }else
        {
            cout << "duplicate" << endl;
        }
    }
}

void printPreOrder(adrNode root)
{
    if(root != NULL)
    {
        cout << info(root) << " ";
        printPreOrder(left(root));
        printPreOrder(right(root));
    }
}

void printDescendant(adrNode root, infotype x)
{
    adrNode cari = findNode(root, x);
    if(cari != NULL)
    {
        printPreOrder(left(cari));
        printPreOrder(right(cari));
    }
}

int sumNode(adrNode root)
{
    if(root == NULL)
    {
        return 0;
    }
    return info(root)+sumNode(left(root))+sumNode(right(root));
}

int countLeaves(adrNode root)
{
    if(root == NULL)
    {
        return 0;
    }else if(left(root) == NULL && right(root) == NULL)
    {
        return 1;
    }
    return countLeaves(left(root)) + countLeaves(right(root));
}

int heightTree(adrNode root)
{
    if(root == NULL)
    {
        return 0;
    }else
    {
        int leftHeight = heightTree(left(root));
        int rightHeight = heightTree(right(root));
        if (leftHeight > rightHeight)
        {
            return 1+leftHeight;
        }else
        {
            return 1+rightHeight;
        }
    }
}
