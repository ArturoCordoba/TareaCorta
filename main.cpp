#include <iostream>
#include "DataStructures/LinkedList.cpp"
#include "Sorts/SortAlgorithms.cpp"
#include "DataStructures/BinarySearchTree.cpp"

using namespace std;

int main() {
    BinarySearchTree<int> *tree = new BinarySearchTree<int>();

    tree->insert(10);
    tree->insert(5);
    tree->insert(20);
    tree->insert(30);
    tree->insert(25);
    tree->insert(18);
    tree->insert(15);
    tree->insert(19);

    cout << tree->getElement(25)->getData() << endl;


    //tree->printPreOrder(tree->getRoot());

    return 0;
}