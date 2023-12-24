#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    binTree root;
    adrNode p;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    printf("=============================================\n");
    for(int i = 0; i< 9; i++)
    {
        cout << x[i] << " ";
    }
    createTree(root);
    for(int i = 0; i< 9; i++)
    {
        p = newNode(x[i]);
        insertNode(root, p);
    }

    printf("\n");
    printf("\nPre Order\t\t: ");
    printPreOrder(root);

    printf("\n");
    printf("\nDescendant of Node 9\t: ");
    printDescendant(root, 9);

    printf("\n");
    printf("\nSum of BST Info\t\t: ");
    cout << sumNode(root);

    printf("\nNumber of Leaves\t: ");
    cout << countLeaves(root);

    printf("\nHeight of Tree\t\t: ");
    cout << heightTree(root);
    printf("\n=============================================");
    return 0;
}
